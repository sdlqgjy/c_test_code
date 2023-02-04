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

//函数声明
void Showmenu();//显示菜单
void Add(struct Book* abs);//添加联系人
int Isexist(struct Book* abs, char name[]);//查找联系人是否存在
void Delete(struct Book* abs);//删除联系人
void Modify(struct Book* abs);//修改联系人信息
void Show(struct Book* abs);//显示全部联系人
void Find(struct Book* abs);//查找联系人

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
			Delete(&abs);
			system("cls");
			break;
		case 3:
			Modify(&abs);
			system("cls");
			break;
		case 4:
			Show(&abs);
			system("cls");
			break;
		case 5:
			Find(&abs);
			system("cls");
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
		scanf_s("%s", abs->memberarray[abs->size].name, 50);
		printf("请输入性别：\t");
		scanf_s("%s", abs->memberarray[abs->size].sex, 50);
		printf("请输入年龄：\t");
		scanf_s("%d", &(abs->memberarray[abs->size].age));
		printf("请输入电话号码：\t");
		scanf_s("%s", abs->memberarray[abs->size].number,12);
		printf("请输入地址：\t");
		scanf_s("%s", abs->memberarray[abs->size].address, 50);
		abs->size++;
		printf("联系人添加成功！\n");
		system("pause");
	}
}
int Isexist(struct Book* abs, char name[]) {
	for (int i = 0; i < abs->size; i++) {
		if (abs->memberarray[i].name == name) {
			return i;//如果姓名相同，返回下标
		}
	}
	return -1;
}
void Delete(struct Book* abs) {
	char name1[MAX];
	printf("请输入要查找联系人的姓名：\t");
	scanf_s("%s", name1, 50);
	int result = Isexist(abs, name1);
	if (result == -1) {
		printf("未找到联系人，删除失败！\n");
		return;
	}
	else {
		for (int i = result; i < abs->size; i++) {
			abs->memberarray[i] = abs->memberarray[i+1];
		}
		abs->size--;
		printf("联系人删除成功！\n");
		system("pause");
	}
}
void Modify(struct Book* abs) {
	char name1[MAX];
	printf("请输入要修改联系人的姓名：\t");
	scanf_s("%s", name1, 30);
	int result = Isexist(abs, name1);
	if (result == -1) {
		printf("未找到联系人，无法修改！\n");
		return;
	}
	else {
		printf("请输入姓名：\t");
		scanf_s("%s", abs->memberarray[abs->size].name, 50);
		printf("请输入性别：\t");
		scanf_s("%s", abs->memberarray[abs->size].sex, 50);
		printf("请输入年龄：\t");
		scanf_s("%d", &(abs->memberarray[abs->size].age));
		printf("请输入电话号码：\t");
		scanf_s("%s", abs->memberarray[abs->size].number, 50);
		printf("请输入地址：\t");
		scanf_s("%s", abs->memberarray[abs->size].address, 50);
		printf("联系人修改成功!\n");
	}
	system("pause");
}
void Show(struct Book* abs) {
	if (abs->size == 0) {
		printf("通讯录不包含联系人！\n");
		return;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			printf("姓名：    %s\n", abs->memberarray[i].name);
			printf("性别：    %s\n", abs->memberarray[i].sex);
			printf("年龄：    %d\n", abs->memberarray[i].age);
			printf("电话号码：%s\n", abs->memberarray[i].number);
			printf("家庭地址：%s\n", abs->memberarray[i].address);
			printf("-----------------------------------\n");
		}
	}
	system("pause");
}
void Find(struct Book* abs) {
	char name1[MAX];
	printf("请输入要查找联系人的姓名：\t");
	scanf_s("%s", name1,20);
	int result = Isexist(abs, name1);
	if (result == -1) {
		printf("未找到联系人，无法显示！\n");
		return;
	}
	else {
		printf("姓名：    %s\n", abs->memberarray[result].name);
		printf("性别：    %s\n", abs->memberarray[result].sex);
		printf("年龄：    %d\n", abs->memberarray[result].age);
		printf("电话号码：%s\n", abs->memberarray[result].number);
		printf("家庭地址：%s\n", abs->memberarray[result].address);
		printf("-----------------------------------\n");
	}
	system("pause");
}