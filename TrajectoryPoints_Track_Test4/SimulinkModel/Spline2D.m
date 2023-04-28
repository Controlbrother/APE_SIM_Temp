classdef Spline2D < handle
    properties(Access = public)
        s
        sx
        sy
        ds
    end
    methods(Access = public)
        function obj = Spline2D
            obj.sx=Spline;
            obj.sy=Spline;
        end
        function Update_Spline2D(obj,x, y)
            obj.s=obj.calc_s(x, y);
            Update_Spline(obj.sx,obj.s, x);
            Update_Spline(obj.sy,obj.s, y);
        end
        
        function s = calc_s(obj, x, y)
            dx = diff(x);
            dy = diff(y);
            obj.ds = zeros(length(dx),1);
            for i = 1:length(dx)
                idx = dx(i);
                idy = dy(i);
                obj.ds(i) = sqrt(idx^2+idy^2);
            end
            s=[0, cumsum(obj.ds)'];
        end 
        
        function [x, y] = calc_position(obj, s)
            x=obj.sx.calc(s);
            y=obj.sy.calc(s);
        end
        
        function k = calc_curvature(obj, s)
            dx = obj.sx.calcd(s);
            ddx = obj.sx.calcdd(s);
            dy = obj.sy.calcd(s);
            ddy = obj.sy.calcdd(s);
            norm_square = dx*dx+dy*dy;
            norm = sqrt(norm_square);
            k = (ddy * dx - ddx * dy )/(norm*norm_square);
        end

        function dk = calc_curvatureDerivative(obj, s)
            dx = obj.sx.calcd(s);
            ddx = obj.sx.calcdd(s);
            dddx = obj.sx.calcddd(s);
            dy = obj.sy.calcd(s);
            ddy = obj.sy.calcdd(s);
            dddy = obj.sy.calcddd(s);
            a  = dx*ddy-dy*ddx;
            b  = dx*dddy-dy*dddx;
            c  = dx*ddx+dy*ddy;
            d  = dx*dx+dy*dy;
            dk = (b*d-3.0*a*c)/(d*d*d);
        end

        function yaw = calc_yaw(obj,s)
            dx = obj.sx.calcd(s);
            dy = obj.sy.calcd(s);
            yaw = atan2(dy,dx);
        end
    end
end

