#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	int* pi = &n;
	*pc = 0;   //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	*pi = 0;
	return 0;
}