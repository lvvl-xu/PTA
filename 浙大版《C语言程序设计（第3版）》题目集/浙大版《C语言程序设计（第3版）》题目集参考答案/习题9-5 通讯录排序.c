#include<stdio.h>

struct fri
{
    char name[11];
    char brithday[10];
    char pNumber[18];
    int temp;
}tt;
int main()
{
    struct fri arr[10];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
       scanf("%s %s %s",&arr[i].name,&arr[i].brithday,&arr[i].pNumber);
       int temp1=(arr[i].brithday[0]-'0')*1000+(arr[i].brithday[1]-'0')*100+(arr[i].brithday[2]-'0')*10+(arr[i].brithday[3]-'0')*1;
       int temp2=(arr[i].brithday[4]-'0')*10+(arr[i].brithday[5]-'0')*1;
       int temp3=(arr[i].brithday[6]-'0')*10+(arr[i].brithday[7]-'0')*1;
       arr[i].temp=(9999-temp1)*365+(12-temp2)*30+(30-temp3)*1;
    }
    int index;
    int j;
    for(i=0;i<n-1;i++)
    {
        index=i;
        tt=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j].temp>=arr[index].temp) index=j;
        }
        arr[i]=arr[index];
        arr[index]=tt;
    }
    for(i=0;i<n;i++)
    {
        printf("%s %s %s\n",arr[i].name,arr[i].brithday,arr[i].pNumber);
    }
    return 0;
}
