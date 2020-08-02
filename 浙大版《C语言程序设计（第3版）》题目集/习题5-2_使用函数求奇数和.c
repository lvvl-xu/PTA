#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
int even( int n ){
    if(n%2==1||n%2==-1){
        return 0;
    }else{
        return -1;
    }
}

int OddSum( int List[], int N ){
    int sum=0;
    for(int i=0;i<N;i++){
        if(even(List[i])==0){
            sum+=List[i];
        }
    }
    return sum;
}