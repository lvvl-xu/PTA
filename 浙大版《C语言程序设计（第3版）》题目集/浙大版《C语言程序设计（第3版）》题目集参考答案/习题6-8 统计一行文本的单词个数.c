#include<stdio.h>
int main()
{
    char str[1000];
    gets(str);
    int i,j;
    int len=strlen(str);
    i=0;
    j=len-1;
    while(str[i]==' ')
    {
        i++;
    }
    while(str[j]==' ')
    {
        j--;
    }
    if(i==len&&j<0) printf("0\n");
    else{
    int n1=i;
    int n2=j;
    int temp=0;
    int l=0;
    for(i=n1+1;i<=n2;i++)
    {
       if(str[i]==' '&&str[i-1]!=' ') {l=1;temp++;}
    }
   printf("%d\n",temp+1);}
    return 0;
}
