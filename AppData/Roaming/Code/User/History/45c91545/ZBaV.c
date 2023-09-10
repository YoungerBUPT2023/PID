#include<stdio.h>
int main()
{
    char arr1[7]="Hello,";
    char arr2[6]="World";
    printf("arr1:%s",arr1);
    printf("arr2:%s",arr2);
    strcat(arr1,arr2);
    printf("arr1:%s",arr1);
    printf("arr2:%s",arr2);
}