#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,j;
    int arr[7][7];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    int index;
    for(k=1;k<=m;k++)
    {
        for(i=0;i<n;i++)
        {
            index=arr[i][n-1];
            for(j=n-1;j>0;j--)
            {
                arr[i][j]=arr[i][j-1];
            }
            arr[i][j]=index;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
