#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    char str[81];
    scanf("%c",&c);
    getchar();
    gets(str);
    //printf("c==%c\n",c);
    //puts(str);
    int len=strlen(str);
    int i;
    int l=0;
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==c)
        {
            l=1;break;
        }
    }
    if(l==0)printf("Not Found\n");
    else printf("index = %d\n",i);
    return 0;
}
