/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\习题5-3_使用函数计算两点间的距离.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-02 20:46:00
 * @version: 
 * @LastEditTime: 2020-08-02 21:18:39
 * @LastEditors: 许东明
 */ 

#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* 你的代码将被嵌在这里 */
double dist( double x1, double y1, double x2, double y2 ){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}