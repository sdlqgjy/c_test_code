/*
    题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            for(int t=1;t<5;t++){
                if(i!=j&&i!=t&&j!=t){
                    printf("%d%d%d\n",i,j,t);
                }
            }
        }
    }
    system("pause");
    return 0;
}