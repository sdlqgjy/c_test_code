#include<stdio.h>
#include<stdlib.h>

/*
    统计一个字符串中字母、数字、空格的个数，要求使用函数实现，函数使用指针变量参数获得计算结果。
*/

void Stats(char *p){
    int letter=0,space=0,number=0;
    int i=0;
    while(p[i]){
        if((p[i]>='a'&&p[i]<='z')||(p[i]>='A'&&p[i]<='Z')){
            letter++;
        }
        else if(p[i]==' '){
            space++;
        }
        else{
            number++;
        }
        i++;
    }
    printf("Letter is %d,space is %d,number is %d\n",letter,space,number);
}

int main()
{
    char arr[999];
    printf("Please enter the string you want to count:\t");
    gets(arr);
    Stats(arr);
    system("pause");
    return 0;
}