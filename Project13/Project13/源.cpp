#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	//向内存申请10个整型的空间
	int* p = (int*)calloc(10 , sizeof(int));
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		//for (i = 0; i < 10; i++)
		//{
		//	*(p + i) = i;
		//}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}

	free(p);
	return 0;
}