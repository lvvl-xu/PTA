#include <stdio.h>
#include<string.h>
#define MAXS 10

char *match( char *s, char ch1, char ch2 )
{
    int len=strlen(s);
    int i;
    int temp=1;
    int l=1;
    char *dizhi;
    for(i=0;i<len;i++)
    {
        if(s[i]==ch1)
        {
            l=0;
            dizhi=&s[i];
            int j=i;
            for(;j<len;j++)
            {
                printf("%c",s[j]);
                if(s[j]==ch2){temp=0;break;}
            }
            printf("\n");
        }
        if(temp==0) break;
    }
    if(temp==1&&l==1)
    {
        printf("\n");
        dizhi=&s[i];
    }
    return dizhi;
}

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
