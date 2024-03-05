#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char str[10], temp[10];
	gets(temp);
	for (i = 0; i < 4; i++)
	{
		gets(str);
		if (strcmp(temp, str) < 0)strcpy(temp, str);

	}
	printf("%s\n", temp);
}