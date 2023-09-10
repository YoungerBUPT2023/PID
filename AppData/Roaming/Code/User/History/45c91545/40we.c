#include <stdio.h>
#include <string.h>
void print(Sturct);
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
    Student stu2 = {30,"Younger",39,{2004,5,20}};
    Student *pstu1 = &stu1;
    print(pstu1);
}
void print(Student *pstu)
{
    printf("年龄：%d\n姓名：%s\n分数：%d\n生日年：%d\n生日月：%d\n生日日：%d\n"
    ,pstu->age,pstu->name,pstu->score,pstu->birthday.years,pstu->birthday.months,pstu->birthday.days);
}