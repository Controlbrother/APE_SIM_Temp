function eta = MPC_Solver_QPhild(H,f,A_Const,b)
% 二次规划
% 该算法是原始对偶算法，该方法充分的剖析了优化问题的结构，是求解二次规划问题的一个较好的算法。
% J = 0.5x'Hx + f'x = min
% A_Const*x <= b
[n1,~] = size(A_Const);
eta = -H\f;
kk = uint8(0);
for i = 1:n1
    if(A_Const(i,:)*eta>b(i))
        kk = kk+uint8(1);
    else
        kk = kk+uint8(0);
    end
end
if kk == uint8(0)
    return;
end
P = A_Const*(H\A_Const');
d = (A_Const*(H\f)+b);
[n,m] = size(d);
x_ini = zeros(n,m);
lambda = x_ini;
al = single(10);
for km = 1:38
    lambda_p = lambda;
    for i = 1:n
        w = P(i,:)*lambda - P(i,i)*lambda(i,1);
        w = w + d(i,1);
        la = -w/P(i,i);
        lambda(i,1) = max(0,la);
    end
    al = (lambda - lambda_p)'*(lambda - lambda_p);
    if(al<10e-8)
        break
    end
end
eta = -H\f -H\A_Const'*lambda;
end

