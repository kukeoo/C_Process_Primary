#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<windows.h>

#include "Add.h"

using namespace std;

void bubble_sort(int v[],int length)
{
    for (int i = length; i > 1; --i)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = 0;
                temp = v[j + 1];
                v[j + 1] = v[j];
                v[j] = temp;
            } 
        }
    }
}

int binsearch(int x, int v[], int length)
{
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (x < v[mid])
        {
            right = mid - 1;
        }
        else if (x > v[mid])
        {
            left = mid + 1;
        }
        else
        {
            return 1;
        }
           
    }
    return 0;
}

int main()
{
    int arr[] = { 1,5,3,8,6,7,4 };
    const int length = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,length);
    for (int k = 0; k < 7; k++)
    {
        cout << arr[k] << endl;
    }
    cout<<binsearch(3, arr, length);
    return 0;
}
