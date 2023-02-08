#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    谭浩强课本第八章15题,用二维数组解决
*/

//函数声明
float avgCourse(float (*pScore)[5], int studentNum, int courseIdx);//返回第i门课程的平均分
float avgStudent(float *pStuScore, int courseNum);// 返回某一学生的平均成绩
float lowbdStudent(float * pStuScore, int courseNum);//返回某一学生的最低成绩
int failNumStudent(float * pStuScore, int courseNum); //返回某一学生的不及格成绩个数 
void priScore(float (*pScore)[5], int studentIdx);//输出第studentIdx个学生的成绩

int main()
{
    float score[4][5]={{ 58, 59, 68, 98, 80 }, { 59, 59, 68, 89, 78 }, { 85, 88, 89, 92, 94 }, { 79, 93, 93, 94, 94 }};//定义学生成绩
    printf("(1)Grade point average in the first course:%.2f\n", avgCourse(score, 4, 1));
    printf("(2) The number of students who failed more than two courses and the grades and average grades of all subjects are:");
    for(int i=0;i<4;i++){
        if(failNumStudent(*(score+i),2)>=2){
            printf("%d ",i+1);
            priScore(*(score+i),i+1);
            printf("The average score is:%f\n", avgStudent(*(score + i), 5));
        }
    }
    int a;
    printf("Students with an average score of 90 points or above or a score of 85 points or above in all courses are numbered:");
	for (a = 0; a < 4; a++)
	{
		int now = 1;
		for (int i = 0; i < 5; i++)
		{
			if (*(*(score + a) + i) < 85)
				now = 0;
		}
		if (avgStudent(*(score + a), 5) >= 90 || now)
			printf("%d ", a + 1);
	}
    system("pause");
    return 0;
}
float avgCourse(float (*pScore)[5], int studentNum, int courseIdx){
    float sum=0;
    float average=0;
    for(int i=0;i<studentNum;i++){
        sum+=*(*(pScore+i)+courseIdx-1);
    }
    average=sum/studentNum;
    return average;
}
float avgStudent(float *pStuScore, int courseNum){
    float sum=0;
    float average;
    for(int i=0;i<courseNum;i++){
        sum+=*(pStuScore+i);
    }
    average=sum/courseNum;
    return average;
}
float lowbdStudent(float * pStuScore, int courseNum){
    for(int i=0;i<courseNum-1;i++){
        for(int j=0;j<courseNum-1-i;j++){
            if(pStuScore[i]>pStuScore[i+1]){
                int temp=pStuScore[i];
                pStuScore[i]=pStuScore[i+1];
                pStuScore[i+1]=temp;
            }
        }
    }
    return pStuScore[0];
}
int failNumStudent(float * pStuScore, int courseNum){
    int count=0;
    for(int i=0;i<courseNum;i++){
        if(pStuScore[i]<60){
            count++;
        }
    }
    return count;
}
void priScore(float (*pScore)[5], int studentIdx){
    printf("The score are:\t");
    float* pscore;
	pscore = *(pScore + studentIdx - 1);
	printf("The average score:");
	for (int i = 0; i < 5; i++)
		printf("%f ", *(pscore + i));
    printf("\n");
}