#include<stdio.h>
int fun(int n)
{
    if(n%2==0) return 0;
    else return 1;
}
int main()
{
    int n;
    int sum=0;
    while(scanf("%d",&n)&&(n!=0&&n>0))
    {
       int temp=fun(n);
       if(temp==1) sum+=n;
    }
    printf("%d\n",sum);
    return 0;
}
