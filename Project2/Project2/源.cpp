#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<iostream>
#define MAX 10


using namespace std;
enum Sex
{
	MALE,
	FEMALE,
};
void test()
{
	//static���ξֲ�����
	static int i = 0;
	i++;
	printf("%d ", i);
}
struct Stu {
	int age;
	char sex;
};
int main() 
{
	//int num1 = 0;
	//int num2 = 0;
	//int sum;
	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	//const int n = 5;
	//int arr[MAX] = {0};
	//enum Sex s = FEMALE;
	//printf("%d\n%d\n%d\n", s,MALE, FEMALE);
	//char arr1[] = "abc";
	//printf("%s\n", arr1);
	//char arr2[] = { 'a','b','c','\0' };
	//printf("%s\n", arr2);
	//printf("%d\n", strlen(arr1));//strlen:string length �����ַ������ȵĺ���
	//printf("%d\n", strlen(arr2));
	//printf("%c\n", '\32');
	/*int input = 0;
	scanf("%d", &input);
	if (input == 1)
		printf("��offer");
	else
		printf("������");*/
	/*int arr[5] = { 1 };
	printf("%d\n", arr[0]);*/
	/*int a = 10;
	int b = a++;
	cout << a << b;*/
	/*unsigned int a = 5;
	cout << a;*/
	//����1
//#include <stdio.h>
//	void test()
//	{
//		int i = 0;
//		i++;
//		printf("%d ", i);
//	}
//	int main()
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			test();
//		}
//		return 0;
//	}
	//����2


		/*int i = 0;
		for (i = 0; i < 10; i++)
		{
			test();
		}*/

		//int num = 10;
		//int *p;
		//p = &num;//ȡ��num�ĵ�ַ
		//printf("%p\n", *p);//��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡ
		//printf("%p\n", p);
		//printf("%p\n", &num);
	//int a = 10;//4���ֽ�
	//int* p = &a;//��һ�ֱ�����������ŵ�ַ��--ָ�����--s=��һ�����ͱ���
	//*p = 20;
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//printf("%d\n", *p);
	//printf("%d\n", a);
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
	Stu s = { 10,'��' };
	struct Stu* ps = &s;

	printf("%d\n", s.age);
	printf("%d\n", (*ps).age);
	printf("%d\n", ps->age);

		return 0;

}
