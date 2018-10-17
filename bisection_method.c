#include<stdio.h>
long double function(long double x)
{
    long double function;
    function=(x*x*x)-x-11;
    return function;
}

void bisection(long double alpha, long double bita, long long int n)
{
    long double x;
    long double function_of_x;
    long long int i;
    for(i=0; i<=n; i++)
    {
        x=(alpha+bita)/2;
        printf(" X%lld = %.15llf   ",i,x);
        function_of_x=function(x);
        printf(" F(X%lld) = %.15llf \n",i,function_of_x);
        if(function_of_x>0)
        {
            bita=x;
        }
        if(function_of_x<0)
        {
            alpha=x;
        }
    }
}
int main()
{
    long double alpha=2;
    long double bita=3;
    long long int n;
    printf(" How many approximation = ");
    scanf("%lld",&n);
    bisection(alpha,bita,n);
    return 0;
}
