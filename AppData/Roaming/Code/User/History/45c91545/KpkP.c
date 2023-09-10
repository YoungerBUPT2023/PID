#include<stdio.h>
#define STRLEN 80 
int main()
{
    char words[STRLEN];

    fgets(words,STRLEN,stdin);
    fputs(words,stdout);
}