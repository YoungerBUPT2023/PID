#include <stdio.h>
int main()
{
    FILE *fp = fopen("C:\\Users\\Yang\\Desktop\\素材\\test1.txt", "r");
    if (fp == NULL)
    {
        printf("打开文件失败.\n");
        return 0;
    }
    else
        printf("shit");

    char ch = fgetc(fp);
    printf("%c\n", ch);
    ch = fgetc(fp);
    printf("%c\n", ch);
    ch = fgetc(fp);
    printf("%c\n", ch);

    // 关闭文件
    fclose(fp);
}