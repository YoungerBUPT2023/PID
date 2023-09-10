#include<stdio.h>
int main()
{
    const char *Message[3] =
    {
        "Hello",
        "World",
        "Name"
    };
    for(int i = 0;i<3;i++)
    {
        printf("%s\n",Message[i]);
    }
}