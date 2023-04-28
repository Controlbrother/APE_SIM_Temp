function [ObjPlaus,ObjPlausLeft,ObjPlausRight] = ...
    PlausCalc(dxMaxFollow,ObjValid,ObjDx,ObjVx,ObjOnLeft,ObjOnRight,ObjDycHist,ObjqDycHist,...
    ObjLpb,ObjLpbLeft,ObjLpbRight,ObjPlausK1,ObjPlausLeftK1,ObjPlausRightK1)
 
ObjPlaus = single(zeros(15,1));
ObjPlausLeft = single(zeros(15,1));
ObjPlausRight = single(zeros(15,1));
 
for i=1:15
    if ObjValid(i)
        dxMax = dxMaxFollow;
       if ObjVx(i)<0
          dxMax = dxMaxFollow - 1.5*ObjVx(i); 
       end
       if ObjDx(i)<dxMax
          t_plaus = PlauByLpb(1,ObjLpb(i),0,ObjPlausK1(i),ObjDx(i),ObjDycHist(i),ObjqDycHist(i),ObjOnLeft(i),ObjOnRight(i));
          t_plausLeft = PlauByLpb(1,ObjLpbLeft(i),0,ObjPlausLeftK1(i),ObjDx(i),ObjDycHist(i),ObjqDycHist(i),ObjOnLeft(i),ObjOnRight(i));
          t_plausRight = PlauByLpb(1,ObjLpbRight(i),0,ObjPlausRightK1(i),ObjDx(i),ObjDycHist(i),ObjqDycHist(i),ObjOnLeft(i),ObjOnRight(i));
          ObjPlaus(i) = t_plaus;
          ObjPlausLeft(i) = t_plausLeft;
          ObjPlausRight(i) = t_plausRight;
       end        
    end
end
coder.allowpcode('plain');
end

 
function Plaus = PlauByLpb(fak,Lpb,dVarYv,PlausK1,dx,dycHist,qDycHist,SpwLeft,SpwRight)
 
t_dtPlaus = interpolate(single(10),single(3),single(20),single(1),dx);
t_fak2uOverDx = single(1);
 
if (qDycHist>0)&&(abs(dycHist)>2)
t_fak2uOverDycHist = min(single(1),interpolate(single(80),single(0.3),single(150),single(0.1),dx)/qDycHist);
t_fak2uOverDx = max(t_fak2uOverDycHist,single(0.2));
end
 
if dx>=80
   t_fak2uLeft = interpolate(single(0),single(1),single(1),single(0),SpwLeft);
   t_fak2uRight = interpolate(single(0),single(1),single(1),single(0),SpwRight);
   t_fak = min(t_fak2uLeft,t_fak2uRight);
   t_fak2uOverDx = min(t_fak2uOverDx,t_fak);
   t_fak2uOverDx = max(t_fak2uOverDx,single(0.2)); 
end
temp1 = 0.1*abs(Lpb)*t_dtPlaus;
 
t_plausIncDef = min(single(1),temp1);
t_plausDec = t_plausIncDef;
t_plausIncDef = t_plausIncDef*t_fak2uOverDx;
if dVarYv>2.6
    t_plausInc = single(0);
else
    t_plausInc = t_plausIncDef*fak;
end
t_PlausLimitLpb = Lpb + single(0.4);
t_PlausLimitLpb = max(single(0),min(single(1),t_PlausLimitLpb));
if Lpb<0
   t_PlausLpb = max(PlausK1 - t_plausDec,single(0));
   if t_PlausLpb>=0.4
        t_plausDec = single(0.25);
        t_PlausLpb = max(PlausK1 - t_plausDec,single(0.4));
   end
else
    if PlausK1<t_PlausLimitLpb
        t_PlausLpb = min(PlausK1 + t_plausInc,t_PlausLimitLpb);
    else
        t_plausDec = single(0.25);
        t_PlausLpb = max(PlausK1 - t_plausDec,t_PlausLimitLpb);
    end
end
Plaus = min(single(1),t_PlausLpb);
end

 
function out = interpolate(x1,z1,x2,z2,Raw)
if Raw<=x1
    out = z1;
else
    if Raw>=x2
        out = z2;
    else
        out = z1 + (Raw-x1)*(z2-z1)/(x2-x1);
    end
end
end