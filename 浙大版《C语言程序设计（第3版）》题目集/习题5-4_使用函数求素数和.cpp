/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\习题5-4_使用函数求素数和.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-02 20:46:00
 * @version: 
 * @LastEditTime: 2020-08-02 21:18:44
 * @LastEditors: 许东明
 */ 

#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p ){
    if(p!=1&&p>0){
        if(p!=2){
            int flag=1;
            for(int i=2;i<=sqrt(p);i++){
                if(p%i==0){
                    flag=0;
                    break;   //优化算法效率
                }else{
                    flag=1;
                }
            }
            return flag;
        }else{
            return 1;
        }
    }else{
        return 0;
    }
}

int PrimeSum( int m, int n ){
    int sum=0;
    for(int i=m;i<=n;i++){
        if(prime(i)==1){
            sum+=i;
        }
    }
    return sum;
}



