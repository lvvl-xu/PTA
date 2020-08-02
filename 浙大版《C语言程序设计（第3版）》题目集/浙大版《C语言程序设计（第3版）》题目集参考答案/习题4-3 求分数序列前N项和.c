#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    double m=2.0;
    double n=1.0;
    double sum=0;
    for(i=1;i<=N;i++)
    {
        sum+=m/n;
        double t=m+n;
        n=m;
        m=t;
    }
    printf("%.2lf\n",sum);
    return 0;
}
