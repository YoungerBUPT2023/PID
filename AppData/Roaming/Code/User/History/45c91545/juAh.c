#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[10];
    char second_name[10];
    char money[10];
    char formal[30];
    puts("请输入你的姓氏：\n");
    fgets(first_name,10,stdin);
    puts("请输入你的名字：\n");
    fgets(second_name,10,stdin);
    puts("请输入你的金额：\n");
    fgets(money,10,stdin);
    strcat(first_name,second_name);
    sprintf(formal,"%s:$%s",first_name,money);
    printf("%s\n",formal);
}