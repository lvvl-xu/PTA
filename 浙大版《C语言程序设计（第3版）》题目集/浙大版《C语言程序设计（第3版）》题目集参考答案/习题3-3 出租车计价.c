#include<stdio.h>
int main()
{
    double k;
    int fen;
    scanf("%lf %d",&k,&fen);
    double money1=fen/5*2.0;
    double money2=10.0;
    double money;
    if(k<3.0) money=money1+money2;
    else
    {
        if(k<10.0) money=money1+money2+(k-3.0)*2.0;
        if(k>=10.0) money=money1+money2+(10.0-3.0)*2.0+(k-10.0)*3.0;
    }
    printf("%.0lf\n",money);
}
