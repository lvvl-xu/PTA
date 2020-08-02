#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    int i;
    int sum=0;
    int t=a;
    for(i=1;i<=n;i++)
    {
        sum+=t;
        t=t*10+a;
    }
    printf("s = %d\n",sum);
    return 0;
}
