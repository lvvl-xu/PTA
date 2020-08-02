
#include <stdio.h>

void dectobin( int n )
{
    if(n<2) printf("%d",n%2);
    else
    {
        dectobin(n/2);
        printf("%d",n%2);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
