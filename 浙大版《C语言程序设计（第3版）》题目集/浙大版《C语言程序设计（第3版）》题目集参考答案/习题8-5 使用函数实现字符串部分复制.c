#include <stdio.h>
#include <string.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s )
{
    int len=strlen(t);
    int i=0;
    if(m>len) *s=NULL;
    else
    {
        m=m-1;
        while(t[m]!='\0')
        {
            s[i++]=t[m];
            m++;
        }
        s[i]='\0';
    }
}
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    //ReadString(t);
    gets(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
