#include<stdio.h>
#include<stdlib.h>

/*
    求满足以下条件的所有六位数，这个数本身是一个整数的平方，其高三位和低三位也分别是另一个整数的平方，如144400=380*380,144=12*12,400=20*20
*/

int main()
{
    //循环穷举
    for(int ret=100000;ret<=999999;ret++){
        for(int i=1;i<=1000;i++){
            if(ret==i*i){
                int ret1=ret%10+((ret/10)%10)*10+((ret/100)%10)*100;
                int ret2=((ret/1000)%10)+((ret/10000)%10)*10+((ret/100000)%10)*100;
                for(int j=1;j<=32;j++){
                    if(ret1==j*j){
                        for(int t=1;t<=32;t++){
                            if(ret2==t*t){
                                printf("%d\n",ret);
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}