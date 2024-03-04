#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, x, y, c;
    printf("输入一个分式：");
    scanf("%d/%d", &a, &b);
    if (a < b)
    {
        x = b;
        y = a;
    }
    else
    {
        x = b;
        y = a;
    }
    c = x % y;
    while (c)
    {
        x = y;
        y = c;
        c = x % y;
    }
    if (b / y != 1)
        printf("最简分式为：%d/%d", a / y, b / y);
    else
        printf("最简分式为：%d", a / y);
    return 0;
}
