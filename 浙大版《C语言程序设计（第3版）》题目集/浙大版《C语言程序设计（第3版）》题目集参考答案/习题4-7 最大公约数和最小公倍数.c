#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int a,b;
    a=M;
    b=N;
    int temp;
    temp=M%N;
    while(temp)   //辗转相除法求最大公约数
    {
        M=N;
        N=temp;
        temp=M%N;
    }
    printf("%d %d\n",N,a*b/N);
    return 0;

}
