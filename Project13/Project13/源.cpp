#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	//���ڴ�����10�����͵Ŀռ�
	int* p = (int*)calloc(10 , sizeof(int));
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
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