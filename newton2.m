x=1.2;
i=1;
for i=1:4
    f=x*x*x+2*x*x+10*x-20;
    p=3*x*x+4*x+10;
    disp(x);
    x=x-(f/p);
    i=i+1;
end
