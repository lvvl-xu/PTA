#include<stdio.h>

double fun(int n)
{
    if(n==1||n==0) return 1;
    else return n*fun(n-1);
}
int main()
{
    double n;
    scanf("%lf",&n);
    int i;
    double sum=1.0;
    double n1=n;
    for(i=1;;i++)
    {
       double t=n1/fun(i);
       sum+=t;
       n1*=n;
       if(t<0.00001)break;

    }
    printf("%.4lf\n",sum);
    return 0;
}
