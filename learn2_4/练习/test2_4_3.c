#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//@file    :test2_4_3
//@author  :sdlqgjy
//@data    :2023/2/4 10:06:01
//@brief   :������ʶ

void swap(int* a, int* b);
int main()
{
	int a, b;
	printf("������Ҫ�������������֣�\n");
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

