#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n/2+1;i++)
    {
        for(j=1;j<=n-(i*2-1);j++)
            printf(" ");
        for(k=1;k<=i*2-1;k++)
            printf("* ");
        printf("\n");
    }
    for(i=n/2;i>=0;i--)
    {
        for(j=1;j<=n-(i*2-1);j++)
            printf(" ");
        for(k=1;k<=i*2-1;k++)
            printf("* ");
        printf("\n");
    }
}
