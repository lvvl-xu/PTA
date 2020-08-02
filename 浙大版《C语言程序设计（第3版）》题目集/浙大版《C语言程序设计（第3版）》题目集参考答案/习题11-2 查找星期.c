#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s )
{
    char str[8][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int i,j;
    int len=strlen(s);
    int l=-1;
    for(i=0;i<7;i++)
    {
        if(strcmp(s,str[i])==0)
        {
            l=1;break;
        }
    }
    if(l==1) return i;
    else return -1;
}

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
