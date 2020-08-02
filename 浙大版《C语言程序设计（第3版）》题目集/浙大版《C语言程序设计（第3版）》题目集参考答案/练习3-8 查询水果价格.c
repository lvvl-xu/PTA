#include<stdio.h>
int main()
{
    int n;
    int arr[1000];
    int i=0;
    while(scanf("%d",&arr[i])!=EOF&&arr[i]!=0)
    {
        i++;
    }
    int t=i;
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
    int l=1;
    for(i=0;i<t;i++)
    {
       if(arr[i]!=0&&l<=5)
       {
           if(arr[i]==1) printf("price = 3.00\n");
           else if(arr[i]==2) printf("price = 2.50\n");
           else if(arr[i]==3) printf("price = 4.10\n");
           else if(arr[i]==4) printf("price = 10.20\n");
           else  printf("price = 0.00\n");
           l++;
       }
    }
    return 0;
}
