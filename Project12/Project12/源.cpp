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

#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(1)//设置默认对齐数为1
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
enum Color//颜色
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
	// 下面输出的结果是一样的吗？
	printf("%d\n", &(un.i));
	printf("%d\n", &(un.c));
	//下面输出的结果是什么？
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);
	return 0;
}