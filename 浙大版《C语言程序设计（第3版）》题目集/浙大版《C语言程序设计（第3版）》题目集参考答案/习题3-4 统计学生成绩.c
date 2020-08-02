#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int arr[5]={0};
    int m;
    for(i=0;i<N;i++)
    {
        scanf("%d",&m);
        if(m>=90)arr[0]++;
        else if(m<90&&m>=80) arr[1]++;
        else if(m<80&&m>=70) arr[2]++;
        else if(m<70&&m>=60) arr[3]++;
        else arr[4]++;
    }
    for(i=0;i<5;i++)
    {
        if(i==5-1) printf("%d\n",arr[i]);
        else printf("%d ",arr[i]);
    }
    return 0;
}
