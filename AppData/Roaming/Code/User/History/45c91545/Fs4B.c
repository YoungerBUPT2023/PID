#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[7]="Hello,";
    char arr2[6]="World";
    printf("arr1:%s\n",arr1);
    printf("arr2:%s\n",arr2);
    strncat(arr1,arr2,2);
    printf("arr1:%s\n",arr1);
    printf("arr2:%s\n",arr2);
}