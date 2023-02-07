#include<stdio.h>
#include<stdlib.h>

#define N 10

/*
    一个int数组，内有0和非0整数，例如：
    1230780340121
    设计函数，将其中非0整数按照原先顺序放在原数组前面，剩下的0放在原数组后面。例如上面数组调序后为：
    1237834121000
    要求设计的函数不能申请数组空间（即函数内不能定义数组）。
*/

void Func(int *p,int len){
    for(int i=0;i<len;i++){
        if(p[i]==0){
            for(int j=i;j<len;j++){
                p[j]=p[j+1];
            }
            p[len-1]=0;
        }
    }
}

int main()
{
    int arr[N];
    for(int i=0;i<N;i++){
        scanf_s("%d",&arr[i]);
    }
    int len=sizeof(arr)/sizeof(arr[0]);
    Func(arr,len);
    for(int i=0;i<len;i++){
        printf("%2d",arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}