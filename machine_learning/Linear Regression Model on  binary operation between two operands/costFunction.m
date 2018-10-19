function [J grad] = costFunction(X,y,theta)
m = length(y);
J = sum((X*theta - y).^2) / (2*m);
grad = (X'*(X*theta-y))/m;

endfunction
