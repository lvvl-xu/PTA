#include <stdio.h>
#include <math.h>

int prime( int p )
{
    if(p<2) return 0;
    else{
    int i;
    int n=p;
    int l=1;
    for(i=2;i<=sqrt(p);i++)
    {
        if(n%i==0)
        {
            l=0;break;
        }
    }
    return l;}
}
void Goldbach( int n )
{
    int i;
    int temp;
    for(i=2;;i++)
    {
       temp=prime(i);
       if(temp==1)
       {
           int tt=n-i;
           if(prime(tt)) {printf("%d=%d+%d",n,i,tt);break;}
       }
    }
}

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
       Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
