#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	
	int ch = rand()%6+1;
	if (ch == 1)
	{
		printf("ȥ8ʳ��");
		int l = rand() % 2 + 1;
		if (l == 1)
			printf("1¥\n");
		if (l == 2)
			printf("2¥\n");

	}
	if (ch == 2)
	{
		printf("ȥ6ʳ��");
		int lou = rand() % 2 + 1;
		if (lou == 1)
			printf("1¥\n");
		if (lou == 2)
			printf("2¥\n");
	}
	if (ch == 3)
	{
		printf("ȥ��Է");
		int lou2 = rand() % 2 + 1;
		if (lou2 == 1)
			printf("1¥\n");
		if (lou2 == 2)
			printf("2¥\n");
	}
	if (ch == 4)
		printf("ȥ��ζ");
	if (ch == 5)
	{
		printf("ȥ9ʳ��");
		int lou3 = rand() % 2 + 1;
		if (lou3 == 1)
			printf("1¥\n");
		if (lou3 == 2)
			printf("2¥\n");
	}
	if (ch == 6)
		printf("ȥ��Է");
	return 0;
}

	
	
