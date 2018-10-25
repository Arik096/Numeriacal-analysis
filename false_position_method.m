f=@(x)(x*x*x-2*x-5);
for i=0:50
    if((f(i+1)*f(i))<0)
        a=i;
        b=i+1;
        break;
    end;
end;
for i=1:6
    x=((a*f(b))-b*f(a))/(f(b)-f(a));
    fprintf('a=%f b=%f x%d=%f f(x%d)=%f\n',a,b,i,x,i,f(x));
    if(f(x)>0)
        b=x;
    else
        a=x;
    end; 
end;