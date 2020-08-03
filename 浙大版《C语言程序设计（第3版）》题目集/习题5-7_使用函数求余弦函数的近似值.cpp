/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\习题5-7_使用函数求余弦函数的近似值.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-03 16:19:46
 * @version: 
 * @LastEditTime: 2020-08-03 16:41:47
 * @LastEditors: 许东明
 */
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);
int jiecheng(int n);
int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */

double funcos(double e, double x)
{

    double tmp1 = 1, tmp2 = 1, tmp3 = 1, sum = 1;
    int i, k;

    k = -1;

    for (i = 2; tmp1 > e; i += 2)
    {
        tmp2 = tmp2 * x * x;
        tmp3 = tmp3 * i * (i - 1);
        sum = sum + k * tmp2 / tmp3;
        tmp1 = tmp2 / tmp3;
        k = -k;
    }

    return sum;
}
