#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void printS(Stu s)
{
	printf("%d\n", s.age);
}

void printQ(Stu* s1)
{
	printf("%d\n", s1->age);
}
using namespace std;

int Add(int x, int y)
{
	int z = 0;
	z = = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}