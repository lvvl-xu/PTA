#include <stdio.h>
#include <math.h>

int search( int n )
{
    int i=101;
    int a,b,c;
    int temp=0;
    for(;i<=n;i++)
    {
        a=i%10;
        b=i/10%10;
        c=i/10/10%10;
        if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
        {
            int t=sqrt(i);
            if(t*t==i) temp++;
        }
    }
    return temp;
}

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}


/* 你的代码将被嵌在这里 */
