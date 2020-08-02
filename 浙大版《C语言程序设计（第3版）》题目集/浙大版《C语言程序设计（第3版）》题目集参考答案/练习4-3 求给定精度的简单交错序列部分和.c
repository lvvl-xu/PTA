#include<stdio.h>
int main()
{
    double exp;
    scanf("%lf",&exp);
    int i;
    int l=1;
    double sum=0;
    double t;
    for(i=1;;i+=3)
    {
        t=1.0/i*l;
        sum+=t;
        if(fabs(t)<=exp) break;
        l=-l;
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}
