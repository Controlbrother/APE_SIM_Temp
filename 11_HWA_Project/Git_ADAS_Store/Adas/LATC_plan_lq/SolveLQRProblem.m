function ptr_K = SolveLQRProblem(A,B,Q,R,tolerance,max_num_iteration)
  if (size(A,1) ~= size(A,2) || size(B,1) ~= size(A,1) || size(Q,1) ~= size(Q,2) ||size(Q,1) ~= size(A,1) ||size(R,1) ~=size(R,2) || size(R,1) ~=  size(B,2))  %A矩阵的行数不等于列数 
    ptr_K = single(zeros(1, 4));
    return;
  end
  AT = transpose(A);   %transpose函数为转置的意思
  BT = transpose(B);
  P = Q;                
  num_iteration = uint8(0);
  % diff = realmax('double');
  diff = realmax('single');
  while (num_iteration < max_num_iteration && diff > tolerance)
    P_next = AT * P * A - AT * P * B / (R + BT * P * B) * BT * P * A + Q;
    diff = abs(max(max(P_next - P)));     %当两次P的差值足够小时，计算反馈矩阵K
    P = P_next;
    num_iteration = num_iteration + uint8(1);
  end
  if (num_iteration >= max_num_iteration)
      ptr_K= single(zeros(1, 4));
  else
      ptr_K = (R + BT * P * B) \ BT * P * A;
  end
end