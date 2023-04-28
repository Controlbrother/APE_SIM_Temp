classdef Spline < handle
    properties(Access = public)
        a
        b
        c
        d       
        x
        y   
        nx
    end  
    methods(Access = public)   
        function Update_Spline(obj,x,y)
            
            obj.b = single(zeros(1,length(x)-1));
            obj.c = single(zeros(1,length(x)));
            obj.d = single(zeros(1,length(x)-1));
            
            obj.x = single(x);
            obj.y = single(y);
            
            obj.nx = single(length(x));
            h = single(diff(x));
            
            obj.a = single(y);
      
            % A = obj.calc_A(h);
                A = single(zeros(length(x),length(x)));
                A(1, 1)= 1.0;
                for i = 1:(obj.nx - 1)
                    if i ~= (obj.nx - 1)
                        A(i+1,i+1) = 2.0*(h(i) + h(i + 1));
                    end
                    A(i + 1,i) = h(i);
                    A(i, i + 1)= h(i);
                end
                A(1, 2)=0.0;
                A(obj.nx, obj.nx-1) = 0.0;
                A(obj.nx, obj.nx) = 1.0;
            % B = obj.calc_B(h);
                B = single(zeros(length(x),1));
                for i = 1:(obj.nx-2)
                    B(i+1)=3.0*(obj.a(i+2)-obj.a(i+1))/ ...
                        h(i+1)-3.0*(obj.a(i+1)-obj.a(i))/h(i) ;
                end
            obj.c = (A\B)';
            
            for i = 1:(obj.nx-1)
                obj.d(i)=(obj.c(i+1)-obj.c(i)) / (single(3)*h(i));
                tb= (obj.a(i+1) - obj.a(i) ) / h(i)- h(i)* (obj.c(i+1)+single(2)*obj.c(i))/ single(3);
                obj.b(i)=tb;
            end
        end 
        function result=calc(obj,t)
            if (t<obj.x(1))
                result= single(NaN);
                return;
            elseif ( t>obj.x(end) )
                result=single(NaN);
                return;
            end
            i = obj.research_index(t);
            dx=t-obj.x(i);
            result=obj.a(i) + obj.b(i)*dx + obj.c(i)*dx.^2.0 + obj.d(i)*dx.^3.0;
        end    
        function result = calcd(obj, t)
            if (t<obj.x(1))
                result= single(NaN);
                return;
            elseif ( t>obj.x(end))
                result=single(NaN);
                return;
            end
            i = obj.research_index(t);
            dx=t-obj.x(i);
            result=obj.b(i) +2.0* obj.c(i)*dx+3.0* obj.d(i)*dx.^2.0;
        end 
        function result =calcdd(obj,t)
            if (t<obj.x(1))
                result= single(NaN);
                return;
            elseif ( t>obj.x(end))
                result=single(NaN);
                return;
            end
            i = obj.research_index(t);
            dx=t-obj.x(i);
            result=2.0* obj.c(i)+6.0* obj.d(i)*dx;
        end  
        function result =calcddd(obj,t)
            if (t<obj.x(1))
                result= single(NaN);
                return;
            elseif ( t>obj.x(end))
                result=single(NaN);
                return;
            end
            i = obj.research_index(t);
            dx=t-obj.x(i);
            result=6.0* obj.d(i);
        end
        function idx = research_index(obj, x)
            idx=obj.bisect(obj.x, x, 1, length(obj.x))-1;
        end    
        function lo = bisect(obj, list, x, lo, hi)
            if lo < 1
                lo = 0;
            end
            if isnan(hi)
                hi =length(list);
            end
            while lo < hi
                mid = floor((lo+hi)/2);
                if x < list(mid)
                    hi=mid;
                else
                    lo=mid+1;
                end
            end
        end  
        function A = calc_A(obj, h)
            A= single(zeros(obj.nx, obj.nx));
            A(1, 1)= 1.0;
            for i = 1:(obj.nx - 1)
                if i ~= (obj.nx - 1)
                    A(i+1,i+1) = 2.0*(h(i) + h(i + 1));
                end
                A(i + 1,i) = h(i);
                A(i, i + 1)= h(i);
            end
            A(1, 2)=0.0;
            A(obj.nx, obj.nx-1) = 0.0;
            A(obj.nx, obj.nx) = 1.0;
        end
        function B = calc_B(obj, h)
            B= single(zeros(obj.nx,1));
            for i = 1:(obj.nx-2)
                B(i+1)=3.0*(obj.a(i+2)-obj.a(i+1))/ ...
                    h(i+1)-3.0*(obj.a(i+1)-obj.a(i))/h(i) ;
            end
        end 
    end
end

