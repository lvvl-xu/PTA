
#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int fn( int a, int n )
{
  int i;
  int sum=0;
  for(i=1;i<=n;i++)
  {
    sum*=10;
    sum+=a;
  }
  return sum;
}
int SumA( int a, int n )
{
  int i,j;
  int sum=0;
  int t;
  for(i=1;i<=n;i++)
  {
     t=0;
     for(j=1;j<=i;j++)
     {
        t*=10;
        t+=a;
     }
     sum+=t;
  }
  return sum;
}
