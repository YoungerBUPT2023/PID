#include <stdio.h>
int main()
{
    int(*ptr)[2];
    int ar[3][2] =
        {1, 2, 3};
    ptr = ar;
    printf("%d", ar[2][0]);
    printf("%d", **(ptr + 1));
}