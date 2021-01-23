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
	//static修饰局部变量
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
	//printf("%d\n", strlen(arr1));//strlen:string length 计算字符串长度的函数
	//printf("%d\n", strlen(arr2));
	//printf("%c\n", '\32');
	/*int input = 0;
	scanf("%d", &input);
	if (input == 1)
		printf("好offer");
	else
		printf("卖红薯");*/
	/*int arr[5] = { 1 };
	printf("%d\n", arr[0]);*/
	/*int a = 10;
	int b = a++;
	cout << a << b;*/
	/*unsigned int a = 5;
	cout << a;*/
	//代码1
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
	//代码2


		/*int i = 0;
		for (i = 0; i < 10; i++)
		{
			test();
		}*/

		//int num = 10;
		//int *p;
		//p = &num;//取出num的地址
		//printf("%p\n", *p);//打印地址，%p--以地址的形式打印
		//printf("%p\n", p);
		//printf("%p\n", &num);
	//int a = 10;//4个字节
	//int* p = &a;//有一种变量是用来存放地址的--指针变量--s=是一个整型变量
	//*p = 20;
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//printf("%d\n", *p);
	//printf("%d\n", a);
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
	Stu s = { 10,'男' };
	struct Stu* ps = &s;

	printf("%d\n", s.age);
	printf("%d\n", (*ps).age);
	printf("%d\n", ps->age);

		return 0;

}
