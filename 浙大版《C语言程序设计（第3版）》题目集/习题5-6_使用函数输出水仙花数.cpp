/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\习题5-6_使用函数输出水仙花数.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-03 09:55:06
 * @version: 
 * @LastEditTime: 2020-08-03 10:23:40
 * @LastEditors: 许东明
 */
#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number)
{
    int x;         //x分离出的每位数字
    int count = 0; //count统计数的位数
    int temp;      //等于number的临时变量
    int sum = 0;   //每个数字的幂之和
    int pow;       //幂
    temp = number;

    do
    {
        count++;
        temp = temp / 10;
    } while (temp != 0);

    temp = number;
    for (int i = 0; i < count; i++)
    {
        x = temp % 10;
        pow = 1;
        for (int j = 1; j <= count; j++)
        {
            pow = pow * x;
        }
        sum = sum + pow;
        temp = temp / 10;
    }
    if (sum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i))
        {
            printf("%d\n", i);
        }
    }
}