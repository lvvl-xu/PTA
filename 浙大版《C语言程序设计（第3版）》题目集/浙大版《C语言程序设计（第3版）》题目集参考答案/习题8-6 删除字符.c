#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c )
{
    int len=strlen(str);
    char *strTemp=(char*)malloc(sizeof(char)*len);
    int i=0;
    int t=0;
    while(str[i]!='\0')
    {
       if(str[i]!=c) strTemp[t++]=str[i];
       i++;
    }
    strTemp[t]='\0';
    for(i=0;i<=t;i++)
        str[i]=strTemp[i];
}
//void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    //ReadString(str);
    gets(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
