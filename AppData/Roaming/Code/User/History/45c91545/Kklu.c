#include<stdio.h>
#define STLEN 2
int main()
{
    char words[STLEN];

    fputs("请输入一句话：",stdout);
    while(fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')   //输入control+z（空指针）或者return即可
    fputs(words,stdout);
    puts("DONE!");
}