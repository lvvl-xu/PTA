#include<stdio.h>

double fun(int *arr,int n,int l)
{
    int i;
    int index=0;
    for(i=1;i<n;i++)
    {
        if(l==1)
        {
            if(arr[i]>=arr[index]) index=i;
        }
        else
        {
            if(arr[i]<=arr[index]) index=i;
        }
    }
    return arr[index]/1.0;
}
int main()
{
    int N;
    int arr[1000];
    scanf("%d",&N);
    int i;
    int sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("average = %.2lf\n",sum/(double)N);
    printf("max = %.2lf\n",fun(&arr,N,1));
    printf("min = %.2lf\n",fun(&arr,N,2));
    return 0;

}
