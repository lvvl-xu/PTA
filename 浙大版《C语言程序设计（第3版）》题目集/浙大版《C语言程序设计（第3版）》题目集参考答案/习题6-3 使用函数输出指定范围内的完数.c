#include <stdio.h>

int factorsum( int number )
{
    int i;
    int j;
    int sum=0;
    for(i=2;i<=number/2;i++)
    {
        for(j=2;j<=number/2;j++)
        {
            if(i*j==number) sum+=(i+j);
        }
    }
  //  printf("%d\n",sum);
    return sum/2+1;
}
void PrintPN( int m, int n )
{
    int k;
    int l=0;
    for(k=m;k<=n;k++)
    {
        int temp=factorsum(k);
        if(temp==k)
        {
           l=1;
           if(k==1) printf("%d = %d\n",k,k);
           else{
           printf("%d = 1",k);
           int i,j;
           int number=k;
           int tt=0;
           int temp[1000];
           for(i=2;i<=number/2;i++)
             {
                 for(j=2;j<=number/2;j++)
                   {
                      if(i*j==number) {temp[tt++]=i;temp[tt++]=j;}
                   }
              }
            int index;
            int t;
            for(i=0;i<tt-1;i++)
            {
                index=i;
                t=temp[i];
                for(j=i+1;j<tt;j++)
                {
                    if(temp[j]<=temp[index]) index=j;
                }
                temp[i]=temp[index];
                temp[index]=t;
            }
            for(i=1;i<tt;i+=2)
            {
                printf(" + %d",temp[i]);
            }
            printf("\n");

        }
        }
    }
    if(l==0) printf("No perfect number\n");
}

int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
