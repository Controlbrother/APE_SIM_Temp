function [dImmerseComfort,axvApproach,DsdLessDsdCalcMinPO_b,AxvPOConstantPO_b]  = approach(TC,VxvRef,dImmerse,MainReqState,TargetIDK1,Vr,Dx,tauGap,tAxvPOConstant,SensObjIsCutInObj,axvFiltFollowControl,dImmerseComfortK1,axvApproachK1,DsdLessDsdCalcMinPO_bK1,AxvPOConstantPO_bK1)
%#codegen
dImmerseComfort = dImmerseComfortK1;
axvApproach = axvApproachK1;
DsdLessDsdCalcMinPO_b = DsdLessDsdCalcMinPO_bK1;
AxvPOConstantPO_b = AxvPOConstantPO_bK1;

if TC
%%
    if TargetIDK1==0
        t_dImmerseComfortK1 = 0;
        t_axvApproachK1 = 0;
    else
        t_dImmerseComfortK1 = dImmerseComfortK1;
        t_axvApproachK1 = axvApproachK1/1.05;
    end   
%% calculate approach controller  
   % 1.modified relative speed 

     vVehObjLimiter=max(Vr+VxvRef,0);                    % calculation of the obj abs speed
     % reduce relative speed at low vehicle speed to increase stopping comfort
     if(VxvRef<6)
         t2=-2;
     elseif(VxvRef>10)
         t2=0;
     else
         t2=(-2/(6-10))*(VxvRef-10);
     end
     % modify the relative speed base on the taugap
     if(tauGap<0.9)
         t3=0;
     elseif(tauGap>1.2)
         t3=0.25;
     else
         t3=(0.25/(1.2-0.9))*(tauGap-0.9);
     end
     if(Vr<0)
         t6=max(t2,Vr)*t3;
     else
         t6=0;
     end
     vLimiter=Vr-t6;
          
%% axvCvVehObjApproachController calculation
   % 3 calculate the final acceleration for the approach controller
      % part1:DsdLessDeltaDTAxvPOConst_b calculation&adjustment
      
      deltaDTAxvPOConst=0.5*vLimiter*tAxvPOConstant;
      
      t_dImmerse = dImmerse;
      if SensObjIsCutInObj
         t_dImmerse = 4.5;
      end
      dSlowDown = Dx - t_dImmerse;
      dImmerseComfort=0.99*Dx;
      if (dImmerseComfort<t_dImmerseComfortK1)&&(dImmerseComfort<t_dImmerse)&&(MainReqState==1)
         dImmerseComfort = min(t_dImmerseComfortK1,t_dImmerse); 
      end
 
      if(dImmerseComfort<=t_dImmerse)
          dSlowDown=max(Dx-dImmerseComfort,0);
      end
      
      if(-1*deltaDTAxvPOConst>dSlowDown)||(axvFiltFollowControl>=0)
          DsdLessDeltaDTAxvPOConst_b=1;                  % meet the calculation condition
      else
          DsdLessDeltaDTAxvPOConst_b=0;
      end
      
      % part2:axvCvVehObjApproachController calculation
      
      dImmerseCritical=max(min(30,0.4*vVehObjLimiter),5);
      dDiffAct2Crit=dImmerse-dImmerseCritical;
      if(dDiffAct2Crit<2)
          dSlowDownCalcMin=2.5;
      elseif(dDiffAct2Crit>15)
          dSlowDownCalcMin=10;
      else
          dSlowDownCalcMin=(7.5/13)*dDiffAct2Crit+(2.5-(15/13));
      end
      
      if(dSlowDown>dSlowDownCalcMin||vLimiter>0)  % the conditions of the normal dSlowDown is satisfied 
          DsdLessDsdCalcMinPO_b=0;
          if(DsdLessDeltaDTAxvPOConst_b==1)
              axvCvVehObjApproachController = CalcAApproachAxvTOConstant(dSlowDown,vLimiter,axvFiltFollowControl);
              AxvPOConstantPO_b=1;                         % indicate the this function is chosen///
          else
              axvCvVehObjApproachController = CalcAApproachAxvTOSegmented(dSlowDown,vLimiter,axvFiltFollowControl,tAxvPOConstant);
              AxvPOConstantPO_b=0; 
          end
      else
          % the conditions of the minimum dSlowDown is satisfied
          DsdLessDsdCalcMinPO_b=1;
          axvCvVehObjApproachController = t_axvApproachK1;
          if(DsdLessDeltaDTAxvPOConst_b==1)
              t_axvCvVehObjApproachController = CalcAApproachAxvTOConstant(dSlowDownCalcMin,vLimiter,axvFiltFollowControl);
          else
              t_axvCvVehObjApproachController = CalcAApproachAxvTOSegmented(dSlowDownCalcMin,vLimiter,axvFiltFollowControl,tAxvPOConstant); 
          end
          if t_axvCvVehObjApproachController<t_axvApproachK1
              axvCvVehObjApproachController = t_axvCvVehObjApproachController;
              AxvPOConstantPO_b=1;
          else
              AxvPOConstantPO_b=0; 
          end
          
          t_axvCvVehObjApproachController = CalcAApproachAxvTOConstant(dSlowDown,vLimiter,axvFiltFollowControl);
          axvCvVehObjApproachController = max(axvCvVehObjApproachController,t_axvCvVehObjApproachController);    
      end
      % part3: set output axvApproachController
      axvApproach = 1.05*axvCvVehObjApproachController;  
      
end
 coder.allowpcode('plain');
end

function AxvC = CalcAApproachAxvTOConstant(dS,vR,axvFilter)

  if(vR>0)
      dSlow=min(dS,-0.5);
  else
      dSlow=max(dS,0.5);
  end
  axvFilt=min(axvFilter,0);
  AxvC=((-0.5*(vR*vR))/dSlow)+axvFilt;
end
  
function AxvS = CalcAApproachAxvTOSegmented(dS,vR,axvFilter,tAxv)
      
  deltaV=axvFilter*tAxv;
  if(deltaV<(-1*vR))
     AxvS=((vR+deltaV)^2)/(deltaV*tAxv-2*dS);
     AxvS=max(-32768,min(32767,AxvS));
  else
     AxvS=0;
  end
end



