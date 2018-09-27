#include<bits/stdc++.h>
using namespace std;

double Function(double x)
{
    return (x*x*x)-x-11;
}

double bisection(double a, double b, long n)
{
    double x,xi;
    for(long i=0;i<=n;i++)
    {
         x=(a+b)/2;
         cout<<"x"<<i<<"= "<<x<<endl<<endl;
         xi=Function(x);
         cout<<"F("<<x<<")="<<xi<<endl<<endl;
        if(xi>0)
            b=x;
        else
            a=x;
    }
    return x;
}
int main()
{
    double a,b;
    long n;
    cin>>a>>b>>n;
    double x=bisection(a,b,n);
    cout<<"x"<<n+1<<"= "<<x<<endl;
    return NULL;
}
