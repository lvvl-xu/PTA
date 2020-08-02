#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s )
{
    int len=strlen(s);
    int i;
    int l=1;
    for(i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-1-i])
        {
            l=0;
            break;
        }
    }
    if(l==1) return true;
    else return false;
}

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
