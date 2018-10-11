a=input('Enter the function:','s');
b=input('Enter the function:','s');
x(1)=input('Enter x0:');
f=inline(a);
fp=inline(b);
for i=1:4
    x(i+1)=x(i)-((f(x(i))/fp(x(i))));
    disp(x(i));
end
root=x(i);
disp(root);
