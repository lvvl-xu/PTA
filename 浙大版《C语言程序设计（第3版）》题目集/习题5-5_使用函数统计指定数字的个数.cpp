/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\习题5-5_使用函数统计指定数字的个数.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-02 20:46:00
 * @version: 
 * @LastEditTime: 2020-08-02 21:16:40
 * @LastEditors: 许东明
 */ 

#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */ 
int CountDigit( int number, int digit ){
    int i=0;
    do{
        if(number%10==digit){
            i++;
        }
        number=number/10;
    }
    while(number);
    return i;
}