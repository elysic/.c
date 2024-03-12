#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
unsigned fun(unsigned w)
{
	if (w >= 10000) return w % 10000;
	if (w >= 1000) return w % 1000;
	if (w >= 100) return w % 100;
	return w % 10;
}
int main()
{
	unsigned x;
	printf("enter a unsigned integer umber:");
	scanf("%u", &x);
	if (x < 10) printf("data error");
	else printf("the result:%u\n", fun(x));
	return(0);
}