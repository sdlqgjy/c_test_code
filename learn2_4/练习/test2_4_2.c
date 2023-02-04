#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//@file    :test2_4_2
//@author  :sdlqgjy
//@data    :2023/2/4 9:52:56
//@brief   :初识结构体

struct Student
{
	char name[20];
	int age;
	double score;
};
struct Book {
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct  student s = { "张三",20,85.5 };
	printf("%s %d %lf\n", s.name, s.age, s.score);
	struct student* ps = &s;
	printf("%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);
	printf("%s %d %lf\n", ps->name,ps->age,ps->score);
	system("pause");
	return 0;
}

