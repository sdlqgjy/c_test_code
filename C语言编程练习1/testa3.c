#include<stdio.h>
#include<stdlib.h>

/*
    判断两个数组是否相等
*/

int main()
{
    int num1;
    int num2;
    int *p1=NULL;
    int *p2=NULL;
    printf("Please input the length of the two arrays:\t");
    scanf_s("%d%d",&num1,&num2);
    p1 = (int*)malloc(num1 * sizeof(int));//开辟空间
    p2 = (int*)malloc(num2 * sizeof(int));//开辟空间
    printf("Please assign the value to array one\n");
    for(int i=0;i<num1;i++){
        int a;
        scanf_s("%d",&a);
        p1[i]=a;
    }
    printf("Please assign the value to array two\n");
    for(int i=0;i<num2;i++){
        int a;
        scanf_s("%d",&a);
        p2[i]=a;
    }
    if(num1!=num2){
        printf("Arrays are not equal\n");
    }
    else{
        for(int i=0;i<num1;i++){
            if(p1[i]!=p2[i]){
                printf("Arrays are not equal\n");
                goto flag;
            }
        }
        printf("Arrays are equal\n");        
    }
flag:
    system("pause");
    return 0;
}