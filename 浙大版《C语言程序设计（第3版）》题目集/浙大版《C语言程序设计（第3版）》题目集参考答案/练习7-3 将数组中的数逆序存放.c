#include<stdio.h>
int main()
{
    int arr[11];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n/2;i++)
    {
        int t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
   // arr[n-1]=t;
    for(i=0;i<n;i++)
    {
        if(i==n-1) printf("%d\n",arr[i]);
        else printf("%d ",arr[i]);
    }
    return 0;
}
