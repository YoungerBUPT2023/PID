#include <stdio.h>
#include <string.h>
typedef struct Birthday
{
    int years;
    int months;
    int days;
}Brithday;
typedef struct Student
{
    int age;
    char name[20];
    float score;
    struct Birthday birthday;  //类型
}Student;
int main()
{
    Student stu1 = {20,"Harry",30,{2005,4,19}};
    printf("年龄：%d\n姓名：%s\n分数：%d\n生日年：%d\n生日月：%d\n生日日：%d\n"
    ,stu1.age,stu1.name,stu1.score,stu1.birthday.years,stu1.birthday.months,stu1.birthday.days);
}