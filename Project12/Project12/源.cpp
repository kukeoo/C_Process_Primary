#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>
struct Stu
{
	char name[20];
	char tele[12];
	char sex[10];
	int age;
};

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
enum Color//��ɫ
{
	RED = 1,
	GREEN = 2,
	BLUE = 4
};

union Un
{
	char c;
	int i;
};
int main()
{

	union Un un;
	// ��������Ľ����һ������
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	//��������Ľ����ʲô��
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);
	return 0;
}