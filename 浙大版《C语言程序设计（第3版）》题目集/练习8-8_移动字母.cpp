/*
 * @FilePath: \PTA\浙大版《C语言程序设计（第3版）》题目集\练习8-8_移动字母.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-08-02 21:30:31
 * @version: 
 * @LastEditTime: 2020-08-02 21:45:10
 * @LastEditors: 许东明
 */ 
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

/* 你的代码将被嵌在这里 */
/**
 * @description: 其中char s[]是用户传入的字符串，题目保证其长度不小于3；函数Shift须将按照要求变换后的字符串仍然存在s[]里,将输入字符串的前3个字符移到最后
 * @param {type} 
 * @return: 
 * @author: 许东明
 */
void Shift( char s[] )
{
    char a[3];
    int i,j;
    for(i = 0; i < 3;i++)
        a[i] = s[i];
    for(i=3;s[i]; i++)
        s[i-3]=s[i];
    for(j=i-3, i = 0; i < 3;i++)
        s[j++] = a[i];
}

/**
 * @description: 是获取是获取字符串
 * @param {type} 
 * @return: 
 * @author: 许东明
 */
void GetString( char s[] ){
    puts(s);
}