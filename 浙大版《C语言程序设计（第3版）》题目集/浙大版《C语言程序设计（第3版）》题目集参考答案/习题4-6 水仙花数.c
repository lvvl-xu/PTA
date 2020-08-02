#include<stdio.h>

void fun1(int *m,int *n,int N)
{
    int i;
    int t1,t2;
    t1=t2=1;
    for(i=1;i<=N-1;i++)
        t1*=10;
    for(i=1;i<=N;i++)
        t2*=10;
    *m=t1;*n=t2-1;
}

int fun2(int n,int N)
{
    int i;
    int t;
    int sum=0;
    int tt=n;
    while(n)
    {
        t=1;
        int temp=n%10;
        for(i=1;i<=N;i++)
        {
            t*=temp;
        }
        sum+=t;
        n/=10;
    }
    if(tt==sum) return 1;
    else return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    int m,n;
    fun1(&m,&n,N);  //找出最小N位数和最大N位数
    printf("%d %d\n",m,n);
    int i;
    for(i=m;i<=n;i++)
    {
        int temp=fun2(i,N);
        if(temp==1) printf("%d\n",i);
    }
    return 0;
}
