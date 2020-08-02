#include<stdio.h>
int main()
{
    double h;
    int n;
    scanf("%lf %d",&h,&n);
    int i;
    double sum=h;
    if(n==0)
    {
        printf("0.0 0.0\n");
    }
    else{
         for(i=1;i<=n-1;i++)
          {
            if(h==0) break;
            h=h/2.0;
            sum=sum+h+h;
          }
          printf("%.1lf %.1lf\n",sum,h/2);
      }
      return 0;
}
