#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    输入3个整数，按由小到大的顺序输出，要求使用函数实现，函数使用指针变量参数获得排序结果。
*/

void Swap(int *p1,int *p2,int *p3){
    if(*p1>*p2){
        int temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
    if(*p1>*p3){
        int temp=*p1;
        *p1=*p3;
        *p3=temp;
    }
    if(*p2>*p3){
        int temp=*p2;
        *p2=*p3;
        *p3=temp;
    }
}

int main()
{
    int a,b,c;
    printf("Please enter three integers:\t");
    scanf_s("%d%d%d",&a,&b,&c);
    Swap(&a,&b,&c);
    printf("%d,%d,%d\n",a,b,c);
    system("pause");
    return 0;
}