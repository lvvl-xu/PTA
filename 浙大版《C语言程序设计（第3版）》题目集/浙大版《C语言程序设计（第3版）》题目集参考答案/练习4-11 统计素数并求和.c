#include<stdio.h>

int fun(int n)
{
    int t=sqrt(n);
    int i;
    int temp=1;
    for(i=2;i<=t;i++)
    {
        if(n%i==0)
        {
            temp=0;
            break;
        }
    }
    return temp;
}
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int i;
    if(M<2)M=2;
    int sum=0;
    int l=0;
    for(i=M;i<=N;i++)
    {
        int temp=fun(i);
        if(temp==1)
        {
            sum+=i;
            l++;
        }
    }
    printf("%d %d\n",l,sum);
    return 0;
}
