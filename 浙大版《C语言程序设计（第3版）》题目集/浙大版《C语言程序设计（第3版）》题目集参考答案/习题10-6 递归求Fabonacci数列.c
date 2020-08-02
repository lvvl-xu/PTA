#include <stdio.h>

int f( int n )
{
    if(n==0||n==1) return n;
    //else if(n==1) return 1;
    else
    {
        return f(n-2)+f(n-1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
