#include<stdio.h>
#include<stdlib.h>

/*
    有五个人，每人额头上都贴了一张黑色或白色纸条，五人对坐，每人可以看到其他人额头上
    纸的颜色，但不知道自己额头上纸的颜色。互相观察后：
    第一个人说：我看见三个人额头上贴的是白纸，一个人额头上贴的是黑纸
    第二个人说：我看见其他四个人额头上贴的是黑纸
    第三个人说，我看见一个人额头贴的是白纸，三个人额头贴的是黑纸
    第四个人说：我看见其他四个人额头贴的是白纸
    第五个人没有说话
    已知额头贴白纸的人说谎话，额头贴黑纸的人说真话，请问这五个人额头上贴什么纸
*/

//设0为黑纸，1为白纸
int main()
{
    int a,b,c,d,e;
    for(a=0;a<=1;a++){
        for(b=0;b<=1;b++){
            for(c=0;c<=1;c++){
                for(d=0;d<=1;d++){
                    for(e=0;e<=1;e++){
                        if(a==0&&(b+c+d+e)==3){
                            continue;
                        }
                        else{
                            if(b==0&&(a+c+d+e)==0){
                                continue;
                            }
                            else{
                                if(c==0&&(a+b+d+e)==1){
                                    continue;
                                }
                                else{
                                    if(d==0&&(a+b+c+e)==0){
                                        continue;
                                    }
                                }
                            }
                        }
                        printf("%2d%2d%2d%2d%2d\n",a,b,c,d,e);
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}