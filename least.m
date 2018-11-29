clc;

x=[1 2 3 4 5];
y=[14 27 40 55 68];

x2= times(x,x);
xy= times(x,y);

SUM_x=sum(x);
SUM_y=sum(y);
SUM_x2=sum(x2);
SUM_xy=sum(xy);

syms a b 
eqns = [ SUM_xy == a*SUM_x2+b*SUM_x , SUM_y == a*SUM_x+5*b ];
S = solve(eqns);
disp(S.a);
disp(S.b);

disp(S.a*X);











