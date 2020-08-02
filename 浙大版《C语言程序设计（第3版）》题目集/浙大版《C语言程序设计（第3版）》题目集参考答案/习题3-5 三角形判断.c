#include<stdio.h>
#include<math.h>
double fun(double x1,double y1,double x2,double y2)
{
    double temp1=x1-x2;
    double temp2=y1-y2;
    return sqrt(temp1*temp1+temp2*temp2);
}
int main()
{
    double x1,y1;
    double x2,y2;
    double x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double lon1=fun(x1,y1,x2,y2);
    double lon2=fun(x2,y2,x3,y3);
    double lon3=fun(x3,y3,x1,y1);
    if(lon1+lon2>lon3&&lon1+lon3>lon2&&lon2+lon3>lon1)
    {
        double p=(lon1+lon2+lon3)/2.0;
        double A=sqrt(p*(p-lon1)*(p-lon2)*(p-lon3));
        printf("L = %.2lf, A = %.2lf\n",lon1+lon2+lon3,A);
    }
    else printf("Impossible\n");
    return 0;
}
