#include <stdio.h>
#define MAXS 15

void StringCount( char *s )
{
    int suma=0;
    int sumA=0;
    int sum_=0;
    int sum1=0;
    int sumO=0;
    int i;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z') suma++;
        if(s[i]>='A'&&s[i]<='Z') sumA++;
        if(s[i]==' ') sum_++;
        if(s[i]>='0'&&s[i]<='9') sum1++;
    }
    printf("%d %d %d %d %d\n",suma,sumA,sum_,sum1,sumO,len-(suma+sumA+sum_+sum1+sumO));
}
int cap=0,low=0,bla=0,num=0,els=0,i,n;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			cap++;
		else if(s[i]>='a'&&s[i]<='z')
			low++;
		else if(s[i]==' ')
			bla++;
		else if(s[i]>='0'&&s[i]<='9')
			num++;
		else
			els++;
	}


int main()
{
    char s[MAXS];

    //ReadString(s);
    gets(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
