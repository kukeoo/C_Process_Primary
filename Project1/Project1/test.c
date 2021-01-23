#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// int是整型的意思
//main前面的int表示main函数调用返回一个整型值
//void main()是过时的写法

int num2 = 20;//全局变量--定义在代码块（{}）之外的变量
int a = 100;//全局变量a
int main() { 
	//主函数，程序的入口，有且仅有一个。从这里开始执行，不能没有他。按F10开始执行，按一下F10，执行一条语句
	//这里完成任务
	//在屏幕上输出hello world
	//函数-printf-打印函数
	//库函数-C语言本身提供给我们使用的函数-使用需要打招呼-#include<stdio.h>
	//std:标准  io:input&output .h:head,头文件后缀

	printf("hello world\n");
	//char 字符类型
	char ch = 'A';//向计算机内存申请一块空间。存放一个字符A
	printf("%c\n",ch);//%c -- 打印字符格式的数据

	int age = 20;
	printf("%d\n", age);//%d -- 打印整型十进制数据

	float f = 5.0;
	printf("%f\n", f);

	double d = 3.14;
	printf("%lf\n", d);

	printf("char:%d(数字代表字节数)\n", sizeof(char));
	printf("int:%d\n",sizeof(int));
	printf("short:%d\n",sizeof(short));
	printf("long:%d\n",sizeof(long));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));

	short age2 = 20;//向内存申请2个字节=16个bit位，用来存放20这个数
	float weight = 95.6f;//向内存申请4个字节存放小数，后面加f意思是申明它是一个单精度浮点类型，因为默认是double-双精度浮点类型

	int num1 = 20;//局部变量--定义在代码块之内的变量
	int a = 10;//局部变量a
	printf("%d\n", a);//全局变量a和局部变量a可以共存--但打印出来的是局部变量a
	//局部变量和全局变量名字不建议相同

	int numb1 = 1;
	int numb2 = 2;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &numb1, &numb2);
	//取地址符号&
	int sum = 0;
	sum = numb1 + numb2;
	printf("sum = %d\n", sum);


	return 0;//返回0
}