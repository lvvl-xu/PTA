#include<stdio.h>
int main()
{
    char str[81];
    gets(str);
    int len=strlen(str);
    int i;
    int temp=0;
    for(i=0;i<len;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            if(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
                temp++;
        }
    }
    printf("%d\n",temp);
    return 0;
}
