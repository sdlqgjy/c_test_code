#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 50//������ַ����󳤶�
#define MAXNUMBER 999//ͨѶ¼��ౣ��ĳ�Ա��

//@file    :phonebook
//@author  :sdlqgjy
//@data    :2023/2/4 14:58:09
//@brief   :���������ָ��ͽṹ��ʵ�ּ򵥵�ͨѶ¼����

//�����Ա�ṹ��
typedef struct Member {
	char name[MAX];
	char sex[5];
	int age;
	char number[11];
	char address[MAX];
};
//����ͨѶ¼�ṹ��
typedef struct Book {
	struct Member memberarray[MAXNUMBER];
	int size;//ͨѶ¼�����е�����
};

//��������
void Showmenu();//��ʾ�˵�
void Add(struct Book* abs);//�����ϵ��
int Isexist(struct Book* abs, char name[]);//������ϵ���Ƿ����
void Delete(struct Book* abs);//ɾ����ϵ��
void Modify(struct Book* abs);//�޸���ϵ����Ϣ
void Show(struct Book* abs);//��ʾȫ����ϵ��
void Find(struct Book* abs);//������ϵ��

int main()
{
	struct Book abs;
	abs.size = 0;
	while (1) {
		Showmenu();
		int choice;
		printf("������Ҫ���еĲ�����\t");
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
			printf("����������������룡\n");
			break;
		}
	}
flag:
	printf("�˳�ϵͳ�ɹ�����ӭ�����ٴ�ʹ��\n");
	system("pause");
	return 0;
}
void Showmenu() {
	printf("******************************\n");
	printf("******* 1�������ϵ�� ********\n");
	printf("******* 2��ɾ����ϵ�� ********\n");
	printf("******* 3���޸���ϵ�� ********\n");
	printf("******* 4����ʾ��ϵ�� ********\n");
	printf("******* 5��������ϵ�� ********\n");
	printf("******* 6���˳�ϵͳ   ********\n");
	printf("******************************\n");
}
void Add(struct Book* abs) {
	if (abs->size >= MAXNUMBER) {
		printf("ͨѶ¼�������޷�����³�Ա��\n");
		return;
	}
	else {
		printf("���ڴ����µ���ϵ�ˡ�����\n");
		printf("������������\t");
		scanf_s("%s", abs->memberarray[abs->size].name, 50);
		printf("�������Ա�\t");
		scanf_s("%s", abs->memberarray[abs->size].sex, 50);
		printf("���������䣺\t");
		scanf_s("%d", &(abs->memberarray[abs->size].age));
		printf("������绰���룺\t");
		scanf_s("%s", abs->memberarray[abs->size].number,12);
		printf("�������ַ��\t");
		scanf_s("%s", abs->memberarray[abs->size].address, 50);
		abs->size++;
		printf("��ϵ����ӳɹ���\n");
		system("pause");
	}
}
int Isexist(struct Book* abs, char name[]) {
	for (int i = 0; i < abs->size; i++) {
		if (abs->memberarray[i].name == name) {
			return i;//���������ͬ�������±�
		}
	}
	return -1;
}
void Delete(struct Book* abs) {
	char name1[MAX];
	printf("������Ҫ������ϵ�˵�������\t");
	scanf_s("%s", name1, 50);
	int result = Isexist(abs, name1);
	if (result == -1) {
		printf("δ�ҵ���ϵ�ˣ�ɾ��ʧ�ܣ�\n");
		return;
	}
	else {
		for (int i = result; i < abs->size; i++) {
			abs->memberarray[i] = abs->memberarray[i+1];
		}
		abs->size--;
		printf("��ϵ��ɾ���ɹ���\n");
		system("pause");
	}
}
void Modify(struct Book* abs) {
	char name1[MAX];
	printf("������Ҫ�޸���ϵ�˵�������\t");
	scanf_s("%s", name1, 30);
	int result = Isexist(abs, name1);
	if (result == -1) {
		printf("δ�ҵ���ϵ�ˣ��޷��޸ģ�\n");
		return;
	}
	else {
		printf("������������\t");
		scanf_s("%s", abs->memberarray[abs->size].name, 50);
		printf("�������Ա�\t");
		scanf_s("%s", abs->memberarray[abs->size].sex, 50);
		printf("���������䣺\t");
		scanf_s("%d", &(abs->memberarray[abs->size].age));
		printf("������绰���룺\t");
		scanf_s("%s", abs->memberarray[abs->size].number, 50);
		printf("�������ַ��\t");
		scanf_s("%s", abs->memberarray[abs->size].address, 50);
		printf("��ϵ���޸ĳɹ�!\n");
	}
	system("pause");
}
void Show(struct Book* abs) {
	if (abs->size == 0) {
		printf("ͨѶ¼��������ϵ�ˣ�\n");
		return;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			printf("������    %s\n", abs->memberarray[i].name);
			printf("�Ա�    %s\n", abs->memberarray[i].sex);
			printf("���䣺    %d\n", abs->memberarray[i].age);
			printf("�绰���룺%s\n", abs->memberarray[i].number);
			printf("��ͥ��ַ��%s\n", abs->memberarray[i].address);
			printf("-----------------------------------\n");
		}
	}
	system("pause");
}
void Find(struct Book* abs) {
	char name1[MAX];
	printf("������Ҫ������ϵ�˵�������\t");
	scanf_s("%s", name1,20);
	int result = Isexist(abs, name1);
	if (result == -1) {
		printf("δ�ҵ���ϵ�ˣ��޷���ʾ��\n");
		return;
	}
	else {
		printf("������    %s\n", abs->memberarray[result].name);
		printf("�Ա�    %s\n", abs->memberarray[result].sex);
		printf("���䣺    %d\n", abs->memberarray[result].age);
		printf("�绰���룺%s\n", abs->memberarray[result].number);
		printf("��ͥ��ַ��%s\n", abs->memberarray[result].address);
		printf("-----------------------------------\n");
	}
	system("pause");
}