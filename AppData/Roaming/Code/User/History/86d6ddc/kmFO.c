#include <stdio.h>
int main()
{
    FILE *fp = fopen("C:/Users/Yang/Desktop/shit/test1.txt", "r");
    if (fp == NULL)
    {
        printf("打开文件失败.\n");
        return 0;
    }
    else
        printf("shit");

    char ch;
    while((ch = fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    

    // 关闭文件
    fclose(fp);
}