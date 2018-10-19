data = load('data.txt');
X = data(:,1:size(data,2)-1);
y = data(:,end:end);
m = length(X);
X = [ones(m,1) X];
initial_theta = zeros(size(X,2),1);
options = optimset('Gradobj','on','MaxIter',400);
[theta cost] = fminunc(@(t)(costFunction(X,y,t)),initial_theta,options); 
test_data = load('test_data.txt');
output = test_data*theta;

