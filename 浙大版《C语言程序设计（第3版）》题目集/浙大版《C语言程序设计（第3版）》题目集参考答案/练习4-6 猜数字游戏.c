#include<stdio.h>
int main()
{
    int random;
    int N;
    scanf("%d %d",&random,&N);
    int i=0;
    int arr[101];
    while(scanf("%d",&arr[i])!=EOF&&arr[i]>=0)
    {
        i++;
    }
    int n=i;
    int l=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>random) {printf("Too big\n");l++;}
        else if(arr[i]<random) {printf("Too small\n");l++;}
        else {l++;break;}
        if(l>N) break;
    }
    if(l==1) printf("Bingo!\n");
    else if(l>1&&l<=3) printf("Lucky You!\n");
    else if(l>3&&l<=N) printf("Good Guess!\n");
    else printf("Game Over\n");
    return 0;

}
