#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	const char* pstr = "abcdef";//�����ǰ�һ���ַ����ŵ�pstrָ�����������
	printf("%c\n", *pstr);
	printf("%s\n", pstr);
	return 0;
}