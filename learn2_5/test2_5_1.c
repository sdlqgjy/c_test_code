#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//@file    :test2_5_1
//@author  :sdlqgjy
//@data    :2023/2/5 13:40:59
//@brief   :ָ�����1
/*
int main()
{
	char str1[] = "hello world";
	char str2[] = "hello world";
	char* str3 = "hello world";
	char* str4 = "hello world";
	if (str1 == str2) {
		printf("str1 and str2 are same\n");
	}
	else {
		printf("str1 and str2 are not same\n");
	}
	if (str3 == str4) {
		printf("str3 and str4 are same\n");
	}
	else {
		printf("str3 and str4 are not same\n");
	}
	system("pause");
	return 0;
}
*/
/*
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int* arr[] = { a,b,c };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", *(arr[i] + j));
		}
		printf("\n");
	}
}
*/
//ָ�����飬�����������ָ��
//����ָ�룺��һ��ָ�룬ָ�������ָ��
/*
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int(* parr)[10] = &arr;//��������ָ�룬ָ��һ������
	for (int i = 0; i < 10; i++) {
		printf("%d", *(*parr+i));
	}
}*/
void print(int(*p)[5], int r, int c) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);

}