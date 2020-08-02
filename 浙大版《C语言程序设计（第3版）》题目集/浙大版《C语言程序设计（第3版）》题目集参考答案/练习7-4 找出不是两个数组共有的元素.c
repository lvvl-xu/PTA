#include<stdio.h>
int temp[100];
int tt=0;
void fun(int arr[][22],int n1,int n2)
{
    int i,j;
    int l;
    for(i=0;i<n1;i++)
    {
      int l=1;
      for(j=0;j<n2;j++)
      {
          if(arr[0][i]==arr[1][j]){l=0;break;}
      }
      if(l==1) temp[tt++]=arr[0][i];
    }
    for(i=0;i<n2;i++)
    {
      int l=1;
      for(j=0;j<n1;j++)
      {
          if(arr[1][i]==arr[0][j]){l=0;break;}
      }
      if(l==1) temp[tt++]=arr[1][i];
    }
}
int main()
{
    int arr[2][22];
    int N;
    int i,k;
    int n1,n2;
    for(k=0;k<2;k++)
    {
        scanf("%d",&N);
        if(k==0) n1=N;
        else n2=N;
        for(i=0;i<N;i++)
        {
           scanf("%d",&arr[k][i]);
        }
    }
    fun(&arr,n1,n2);
    int j;
    int l;
    for(i=0;i<tt-1;i++)
    {
        for(j=i+1;j<tt;j++)
        {
            if(temp[j]==temp[i])temp[j]=-999999;
        }
    }
    for(i=0;i<tt;i++)
    {
        if(temp[i]!=-999999)
        {
            if(i==0) printf("%d",temp[i]);
            else printf(" %d",temp[i]);
        }
    }
    printf("\n");
    return 0;
}
