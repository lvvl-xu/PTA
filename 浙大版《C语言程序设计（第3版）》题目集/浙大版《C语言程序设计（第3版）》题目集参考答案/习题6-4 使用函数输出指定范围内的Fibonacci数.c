#include <stdio.h>

int fib( int n )
{
    int a=1;
    int b=1;
    if(n==1||n==2) return 1;
    else
    {
       int c;
       int temp=2;
       while(1)
        {
          c=a+b;
          temp++;
          a=b;
          b=c;
          if(temp>=n) break;
        }
        return c;
    }

}
void PrintFN( int m, int n )
{
    int i;
    int arr[100];
    int tt=0;
    for(i=1;;i++)
    {
        int temp=fib(i);
        if(temp>=m&&temp<=n)
        {
           arr[tt++]=temp;
        }
        if(temp>n) break;
    }
    if(tt==0) printf("No Fibonacci number\n");
    else
    {
        for(i=0;i<tt;i++)
         {
            if(i==tt-1) printf("%d\n",arr[i]);
            else printf("%d ",arr[i]);
         }
    }
}

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
