#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<assert.h>

char* my_strcat(char* dest,const char* src)
{
	assert(dest != NULL && src != NULL);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}

int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

char* my_strncpy(char* dest, char* src,int count)
{
	assert(dest && src);
	char* ret = dest;
	while (count && (*dest++ = *src++))
	{
		count--;
	}
	if (count)
	{
		while (--count)
		{
			*dest++ = '\0';
		}
	}
	return ret;
}

char* my_strstr(char* dest,char* src)
{
	assert(dest && src);
	char* s1 = dest;
	char* s2 = src;
	char* cur = dest;
	if (*src == '\0')
	{
		return dest;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = src;
		while ((* s1 != '\0')&&(*s2 !='\0')&&(*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;	
}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;//一个字节一个字节的访问
		dest = (char*)dest+1;
		src = (char*)src+1;
	}
	return ret;
}

//void* my_mommove(void* dest, const void* src, size_t count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//从前向后
//		while (count--)
//		{
//			dest = (char*)dest + 1;
//		}
//	}
//	else
//	{
//		//从后向前
//	}
//}



struct {
	char name[40];
	int age;
} person, person_copy;
int main()
{

	int arr[10] = {0};
	memset(arr, 1, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}