#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
    char* ret = dest;
    assert(dest && src);

    while (*dest++ = *src++)
        ;     /* Copy src over dst */
    return ret;
}

int my_strlen(const char* str)//不期望他的内容被改变
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr1[] = "##########";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf(arr1);
    printf("%d\n", my_strlen(arr1));
    return 0;
}