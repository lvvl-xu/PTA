#include<stdio.h>

// A+Z=155
// B+Y=155
// ......
int main()
{
    char str[81];
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=155-str[i];
        }
    }
    puts(str);
}
