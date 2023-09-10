#include<stdio.h>
#include<string.h>
int main()
{
    if (strncmp("apple","appie",4)==0)
    printf("You are right!");
    if (strcmp("a","a")>0)
    printf("shit");
    if (strcmp("b","b")<0)
    printf("Hello!");
    return 0;
}