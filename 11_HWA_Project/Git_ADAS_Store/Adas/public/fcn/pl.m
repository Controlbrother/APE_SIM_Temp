function [A,B,C,D] = pl(X,Y)

MatrixA = [X(1)^3,X(1)^2,X(1),1;...
    X(2)^3,X(2)^2,X(2),1;...
    X(3)^3,X(3)^2,X(3),1;...
    X(4)^3,X(4)^2,X(4),1];
MatrixB = [Y(1);Y(2);Y(3);Y(4)];

if det(MatrixA)==0
    A=cast(0,class(X(1)));
    B=cast(0,class(X(1)));
    C=cast(0,class(X(1)));
    D=cast(0,class(X(1)));
else
    P = MatrixA\MatrixB;
    A = P(1);
    B = P(2);
    C = P(3);
    D = P(4);
end
coder.allowpcode('plain');
end