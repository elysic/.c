#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, x, y, c;
    printf("����һ����ʽ��");
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
        printf("����ʽΪ��%d/%d", a / y, b / y);
    else
        printf("����ʽΪ��%d", a / y);
    return 0;
}
