#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

/*
    有一个已经排好序的整数数组a[]={1,4,6,9,13,16,19,28,40,100},输入一个数字number,按照原来的排序顺序将它插入数组中，并输出插入后的数组
*/

int main()
{
    int a[]={1,4,6,9,13,16,19,28,40,100};
    int number;
    printf("Please enter an integer:\t");
    scanf_s("%d",&number);
    int len=sizeof(a)/sizeof(a[0]);
    int *p=NULL;
    p=(int *)malloc((len+1) * sizeof(int));//开创一个比原数组大一的空间
    for(int i=0;i<len;i++){
        p[i]=a[i];
    }
    if(number>p[len-1]){
        p[len]=number;
    }else{
        for(int i=0;i<len;i++){
            if(p[i]>=number){
                for(int j=len-1;j>=i;j--){
                     p[j+1]=p[j];
                }
                p[i]=number;
                break;
            }
        }
        for(int i=0;i<len+1;i++){
            printf("%d ",p[i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}