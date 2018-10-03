#include<stdio.h>

float function(float x)
{
    return (x*x*x)-x-11;
}

void bisection(float a, float b, int n)
{
    float x,f_of_x;
    int i;
    for(i=0;i<=n;i++)
    {
         x=(a+b)/2;

         printf(" X%d = %f   ",i,x);

         f_of_x=function(x);

         printf(" F(X%d) = %f \n",i,f_of_x);

        if(f_of_x>0)
            b=x;
        else
            a=x;
    }
}
int main()
{
    float a=2,b=3;
    int n;

    printf("How many iretation = ");
    scanf("%d",&n);

    bisection(a,b,n);

    return 0;
}
