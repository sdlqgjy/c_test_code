#include<stdio.h>
#include<stdlib.h>

/*
    有分别标有a,b,c,d,e的五个球，准备分给甲，乙，丙，丁，戊5个人，已知甲不要a球，乙不要b球，丙不要c球，编程计算共有多少种不同的分法
*/

int main()
{
    int a,b,c,d,e;//定义五个球
    int count=0;
    //利用穷举求解
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++){
            for(c=1;c<=5;c++){
                for(d=1;d<=5;d++){
                    for(e=1;e<=5;e++){
                        if(a!=1&&b!=2&&c!=3){
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("The result is:%d\n",count);
    system("pause");
    return 0;
}