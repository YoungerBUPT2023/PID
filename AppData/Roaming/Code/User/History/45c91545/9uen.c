#include<stdio.h>
#include<string.h>
#define SIZE 40
int main()
{
    char arr1[] ="Hello,";
    char arr2[] = "World";
    printf("arr1:%s\n",arr1);
    printf("arr1:%s\n",arr2);
    strcat(arr1,arr2);
    printf("arr1:%s\n",arr1);
    printf("arr1:%s\n",arr2);
    return 0;
}