#include<stdio.h>
#include<stdlib.h>

/*
    从键盘输入一个长整数，然后按照其各位数字逆序输出
*/

int main()
{
    long int num;
    printf("Please input a number:\t");
    scanf_s("%d",&num);
    int i=0;
    printf("The result is:\n");
    while(num){
        printf("%d",num%10);
		num=num/10;
    }
    printf("\n");
    system("pause");
    return 0;
}
