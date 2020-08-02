#include<stdio.h>
int main()
{
    int m; //车速
    int n; //限速
    scanf("%d %d",&m,&n);
    int t1=n+n*0.1;
    int t2=n+n*0.5;
   // printf("%d %d\n",t1,t2);
    if(m<t1) printf("OK\n");
    if(m>=t1&&m<t2)
    {
        double temp1=(m-n)/(double)n*100.0;
        double temp2=temp1-(int)temp1;
        int temp;
        if(temp2>=0.5) temp=(int)temp1+1;
        else temp=(int)temp1;
        printf("Exceed %d%%. Ticket 200\n",temp);
    }
    if(m>=t2)
    {
        double temp1=(m-n)/(double)n*100.0;
        double temp2=temp1-(int)temp1;
        int temp;
        if(temp2>=0.5) temp=(int)temp1+1;
        else temp=(int)temp1;
        printf("Exceed %d%%. License Revoked\n",temp);
    }
}
