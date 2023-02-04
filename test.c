#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 50//姓名地址的最大长度
#define MAXNUMBER 999//通讯录最多保存的成员数

//@file    :phonebook
//@author  :sdlqgjy
//@data    :2023/2/4 14:58:09
//@brief   :利用数组和指针和结构体实现简单的通讯录管理

//定义成员结构体
typedef struct Member {
	char name[MAX];
	char sex[5];
	int age;
	char number[11];
	char address[MAX];
};
//定义通讯录结构体
typedef struct Book {
	struct Member memberarray[MAXNUMBER];
	int size;//通讯录中现有的人数
};

void Showmenu();//显示菜单
void Add(struct Book* abs);//添加联系人函数

int main()
{
	struct Book abs;
	abs.size = 0;
	while (1) {
		Showmenu();
		int choice;
		printf("请输入要进行的操作：\t");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			Add(&abs);
			system("cls");
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			goto flag;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	}
flag:
	printf("退出系统成功！欢迎您的再次使用\n");
	system("pause");
	return 0;
}
void Showmenu() {
	printf("******************************\n");
	printf("******* 1、添加联系人 ********\n");
	printf("******* 2、删除联系人 ********\n");
	printf("******* 3、修改联系人 ********\n");
	printf("******* 4、显示联系人 ********\n");
	printf("******* 5、查找联系人 ********\n");
	printf("******* 6、退出系统   ********\n");
	printf("******************************\n");
}
void Add(struct Book* abs) {
	if (abs->size >= MAXNUMBER) {
		printf("通讯录已满，无法添加新成员！\n");
		return;
	}
	else {
		printf("正在创建新的联系人···\n");
		printf("请输入姓名：\t");
		scanf_s("%s", abs->memberarray[abs->size].name);
		printf("请输入性别：\t");
		scanf_s("%s", abs->memberarray[abs->size].sex);
		printf("请输入年龄：\t");
		scanf_s("%d", &(abs->memberarray[abs->size].age));
		printf("请输入电话号码：\t");
		scanf_s("%s", abs->memberarray[abs->size].number);
		printf("请输入地址：\t");
		scanf_s("%s", abs->memberarray[abs->size].address);
		abs->size++;
		printf("联系人添加成功！\n");
		system("pause");
	}
}