#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	const char* pstr = "abcdef";//这里是把一个字符串放到pstr指针变量里了吗？
	printf("%c\n", *pstr);
	printf("%s\n", pstr);
	return 0;
}