#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int reverse( int number )
{
    int l=1;
    if(number<0) {l=-1;number=-number;}
    int sum=0;
    int temp;
    while(number)
    {
       temp=number%10;
       sum=sum*10+temp;
       number/=10;
    }
    sum*=l;
}
