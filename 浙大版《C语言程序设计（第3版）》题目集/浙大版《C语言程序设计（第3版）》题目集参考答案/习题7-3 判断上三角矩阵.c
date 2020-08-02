#include<stdio.h>

int fun(int arr[][11],int n)
{
    int i,j;
    int l=1;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i][j]!=0){l=0;break;}
        }
        if(l==0) break;
    }
    return l;

}
int main()
{
    int T,n;
    scanf("%d",&T);
    int t,i,j;
    int k=0;
    int arr[11][11];
    int temp[11];
    for(t=1;t<=T;t++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        int t=fun(&arr,n);
        temp[k++]=t;
    }
    for(i=0;i<k;i++)
        if(temp[i]==1)printf("YES\n");
    else printf("NO\n");
    return 0;
}
