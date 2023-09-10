#include <stdio.h>
int main()
{
    FILE *fp = fopen("C:/Users/Yang/Desktop/shit/test1.txt", "r");
    // if (fp == NULL)
    // {
    //     printf("打开文件失败.\n");
    //     return 0;
    // }
    // else
    //     printf("file:\n");

    // char ch;
    // while((ch = fgetc(fp))!=EOF)
    // {
    //     printf("%c",ch);
    // }

    char str[200];
    fgets(str,200,fp);
    printf("%s",str);

    // 关闭文件
    fclose(fp);
}