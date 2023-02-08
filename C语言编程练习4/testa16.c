#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    1、定义一个结构体Date，用于存放日期（年，月，日）
    2、实现函数输出一个如期，显示格式如March 12，2018，函数参数使用Date*
    3、实现函数计算某一年的第几天的日期是多少（例如2015年第45天的日期是Feb 14， 2015），注意闰年，函数返回值使用Date
    4、实现函数计算两个日期前相差多少天，函数参数使用Date*
*/

void Print(struct Data *abs);

typedef struct Data{
    int year;
    int month;
    int day;
};

int main()
{
    struct Data a={2023,2,8};
    Print(&a);
    system("pause");
    return 0;
}
void Print(struct Data *abs){
    const char *Month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int month=abs->month;
    int day=abs->day;
    int year=abs->year;
    printf("%s %d,%d\n",Month[month-1],day,year);
}