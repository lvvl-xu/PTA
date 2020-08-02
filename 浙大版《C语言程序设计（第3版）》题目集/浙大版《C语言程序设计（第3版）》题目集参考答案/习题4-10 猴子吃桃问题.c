#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int t=1;
    for(i=N;i>1;i--)
    {
        t=(t+1)*2;

    }
    printf("%d\n",t);
}
