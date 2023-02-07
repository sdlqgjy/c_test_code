#include<stdio.h>
#include<stdlib.h>

/*
    计算级数ex=1+x+x^2/2!+x^3/3!+······+x^n/n!
*/

int main()
{
    printf("Please enter the number of items for the progression:\t");
    int n;
    scanf_s("%d",&n);
    printf("Enter the value of the argument x:\t");
    int x;
    scanf_s("%d",&x);
    float sum=0;
    for(int i=0;i<=n;i++){
        int ret=1;
        for(int j=1;j<=i;j++){
            ret=ret*j;
        }
        sum+=pow(x,i)/ret;
    }
    printf("The result is %f",sum);
}