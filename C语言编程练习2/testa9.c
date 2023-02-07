#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
    输入一个实数，要求四舍五入保留两位小数后输出
*/

int main()
{
    float num;
    printf("Please enter a real number:\t");
    scanf_s("%f",&num);
    num=round(num*100)/100.0;//利用C语言库函数实现四舍五入
    printf("%.2f",num);
    system("pause");
    return 0;
}