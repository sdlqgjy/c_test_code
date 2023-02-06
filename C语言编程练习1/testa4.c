#include<stdio.h>
#include<stdlib.h>

/*
    20个数组成等差数列，已知前四个数的和为26，积是880,输出这20个数，并且要求每行输出5个数
*/

int main()
{
    int ret1,ret2;
    int a,d;
    for(a=1;a<10;a++){
        for(d=1;d<10;d++){
            ret1=a+a+d+a+2*d+a+3*d;
            ret2=(a)*(a+d)*(a+2*d)*(a+3*d);
            if(ret1==26&&ret2==880){
                for(int i=1;i<=20;i++){
                    printf("%d ",a+(i-1)*d);
                    if(i%5==0){
                        printf("\n");
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}