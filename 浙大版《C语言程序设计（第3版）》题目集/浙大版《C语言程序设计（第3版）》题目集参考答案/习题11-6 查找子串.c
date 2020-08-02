
#include <stdio.h>
#include<string.h>
#define MAXS 30

char *search(char *s, char *t)
{
    char *result=NULL;
    int lenS=strlen(s);
    int lenT=strlen(t);
    int i,j;
    char c=t[0];
   // printf("%c\n",c);
    int temp;
    for(i=0;i<lenS;i++)
    {
        if(s[i]==c)
        {
            int tt=0;
            temp=0;
            for(j=i;j<lenS;j++)
            {
               if(s[j]==t[tt]) temp++;
               tt++;
               if(tt>=lenT) break;
            }
        }
        if(temp==lenT){result=&s[i];break;}
    }
    return result;
}

int main()
{
    char s[MAXS], t[MAXS], *pos;

    //ReadString(s);
    gets(s);
    gets(t);
    //ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
       // printf("%d\n", pos - s);
        printf("%d\n", pos-s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
