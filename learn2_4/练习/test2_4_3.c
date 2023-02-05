<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//@file    :test2_4_3
//@author  :sdlqgjy
//@data    :2023/2/4 10:06:01
//@brief   :函数初识

void swap(int* a, int* b);
int main()
{
	int a, b;
	printf("请输入要交换的两个数字：\n");
	scanf_s("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d   %d", a, b);
	system("pause");
	return 0;
}
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

=======
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//@file    :test2_4_3
//@author  :sdlqgjy
//@data    :2023/2/4 10:06:01
//@brief   :函数初识

void swap(int* a, int* b);
int main()
{
	int a, b;
	printf("请输入要交换的两个数字：\n");
	scanf_s("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d   %d", a, b);
	system("pause");
	return 0;
}
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

>>>>>>> 98f4039e30fb801bec0199039ac822b4f23a1334
