#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;
//��һ�����������в��Ҿ����ĳ������n��
//��дint binsearch(int x, int v[], int n); 
//���ܣ���v[0] <= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x��
int binsearch(int x, int v[], int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++) 
		{
			if (v[j] > v[j + 1])
			{
				int temp;
				temp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = temp;
			}

		}
	}
	for (int k = 0; k < n; k++) 
	{
		printf("%d ", v[k]);
	}
	return 0;
}

int main() 
{
	int v[5] = { 1,5,6,2,7 };
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[j] > v[j + 1])
			{
				int temp;
				temp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = temp;
			}

		}

	}

	for (int k = 0; k < 5; k++)
	{
		printf("%d ", v[k]);
	}
	return 0;
}
