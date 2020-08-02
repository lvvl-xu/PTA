#include<stdio.h>
#include<math.h>
int main()
{
    char str[81];
    gets(str);
    int len=strlen(str);
    int i;
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
