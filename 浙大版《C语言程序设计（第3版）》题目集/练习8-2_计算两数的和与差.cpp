/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\练习8-2_计算两数的和与差.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-02 21:22:11
 * @version: 
 * @LastEditTime: 2020-08-02 21:29:02
 * @LastEditors: 许东明
 */ 
#include <stdio.h>

void sum_diff( float op1, float op2, float *psum, float *pdiff );

int main()
{
    float a, b, sum, diff;

    scanf("%f %f", &a, &b);
    sum_diff(a, b, &sum, &diff);
    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
	
    return 0; 
}

/* 你的代码将被嵌在这里 */
void sum_diff( float op1, float op2, float *psum, float *pdiff ){
    *psum=op1+op2;
    *pdiff=op1-op2;
}