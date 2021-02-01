#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	//返回目的空间的起始地址
	return ret;
}
int main()
{
	char str1[] = "abcdef";
	const char* str2 = "bbb";
	printf("%s\n", my_strcpy(str1,str2));
	int p = 2;
	while (p--)
	{
		printf("%d\n", p);
	}
	printf("%d\n", p);
	return 0;
}