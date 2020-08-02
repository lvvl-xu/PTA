#include<stdio.h>
int main()
{
    int n;
    int arr[11][11];
    scanf("%d",&n);
    int i,j;
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];   //全部数据相加
        }
    }
    for(i=0;i<n;i++)
    {
        sum-=arr[i][n-1];  //减去最后一列
        sum-=arr[n-1][i];  //减去最后一行
    }
    sum+=arr[n-1][n-1];   //元素arr[n-1][n-1]被减两次，因此加一次
    int l=n-1;
    for(i=0;i<n;i++)
    {
        sum-=arr[i][l];   //减去副对角线上的元素
        l--;
    }
    sum+=arr[0][n-1];    //元素arr[0][n-1]被减两次，因此加一次
    sum+=arr[n-1][0];    //元素arr[n-1][0]被减两次，因此加一次
    printf("%d\n",sum);
    return 0;
}
