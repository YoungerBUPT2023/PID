#include<stdio.h>
int main()
{
    FILE *fp = fopen("C:\\Users\\Yang\\Desktop\\素材\\test1.txt","r");
    if(fp != NULL)
    {
        printf("打开文件失败.\n");
        return 0;
    }
}