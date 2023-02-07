#include<stdio.h>
#include<stdlib.h>

/*
    实现三行三列矩阵的转置，及行列互换
*/

int main()
{
    int arr[3][3];
    printf("Please enter a matrix with three rows and three columns:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf_s("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }
    int arr2[3][3];//定义一个新数组用来接受转置矩阵
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    printf("The transpose matrix is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%2d",arr2[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}