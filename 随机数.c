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
		printf("去8食堂");
		int l = rand() % 2 + 1;
		if (l == 1)
			printf("1楼\n");
		if (l == 2)
			printf("2楼\n");

	}
	if (ch == 2)
	{
		printf("去6食堂");
		int lou = rand() % 2 + 1;
		if (lou == 1)
			printf("1楼\n");
		if (lou == 2)
			printf("2楼\n");
	}
	if (ch == 3)
	{
		printf("去西苑");
		int lou2 = rand() % 2 + 1;
		if (lou2 == 1)
			printf("1楼\n");
		if (lou2 == 2)
			printf("2楼\n");
	}
	if (ch == 4)
		printf("去风味");
	if (ch == 5)
	{
		printf("去9食堂");
		int lou3 = rand() % 2 + 1;
		if (lou3 == 1)
			printf("1楼\n");
		if (lou3 == 2)
			printf("2楼\n");
	}
	if (ch == 6)
		printf("去东苑");
	return 0;
}

	
	
