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
            sum+=arr[i][j];   //ȫ���������
        }
    }
    for(i=0;i<n;i++)
    {
        sum-=arr[i][n-1];  //��ȥ���һ��
        sum-=arr[n-1][i];  //��ȥ���һ��
    }
    sum+=arr[n-1][n-1];   //Ԫ��arr[n-1][n-1]�������Σ���˼�һ��
    int l=n-1;
    for(i=0;i<n;i++)
    {
        sum-=arr[i][l];   //��ȥ���Խ����ϵ�Ԫ��
        l--;
    }
    sum+=arr[0][n-1];    //Ԫ��arr[0][n-1]�������Σ���˼�һ��
    sum+=arr[n-1][0];    //Ԫ��arr[n-1][0]�������Σ���˼�һ��
    printf("%d\n",sum);
    return 0;
}
