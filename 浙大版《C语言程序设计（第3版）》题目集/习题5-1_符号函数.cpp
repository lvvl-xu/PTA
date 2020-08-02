/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\习题5-1_符号函数.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-02 20:46:00
 * @version: 
 * @LastEditTime: 2020-08-02 21:18:22
 * @LastEditors: 许东明
 */ 

#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

/* 你的代码将被嵌在这里 */
int sign( int x ){
    if(x > 0){
        return 1;
    }else if(x == 0){
        return 0;
    }else{
        return -1;
    }
}