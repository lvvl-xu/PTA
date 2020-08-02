#include<stdio.h>
int main()
{
    char str[6][81];
    int arrSum[5]={0};
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s",&str[i]);
    }
    int j;
    int index=0;
    for(i=1;i<5;i++)
    {
        if(strlen(str[i])<=strlen(str[index])) index=i;
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<strlen(str[index]);j++)
        {
            arrSum[i]+=str[i][j];
        }
    }
    for(i=0;i<5;i++)
    printf("%d ",arrSum[i]);

}
