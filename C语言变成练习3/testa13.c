#include<stdio.h>
#include<stdlib.h>

/*
    int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int *p1; int (*p2)[5]; 
    1) 试分别使用指针变量p1和p2输出数组a中每个元素的内容。
    2) 试分别用p1和p2得到a[2][2]内容和a[2][2]的地址
*/

int main()
{
    int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int *p1; 
    int (*p2)[5]; 
    //利用p1
    p1=a;
    for(int i=0;i<20;i++){
        printf("%4d ",p1[i]);
        if((i+1)%5==0){
            printf("\n");
        }
    }
    printf("The element is %d,the address is %p\n",*(p1+6),(p1+6));
    //利用p2
    p2=&a[0];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%4d",*(*(p2+i)+j));
        }
        printf("\n");
    }
    printf("The element is %d,the address is %p\n",*(*(p2+1)+1),(*(p2+1)+1));
    system("pause");
    return 0;
}