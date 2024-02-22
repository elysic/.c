
#include<stdio.h>
//#define PT 5.5
//#define S(x) PT*x*x
//int main()
//{
//	printf("\n");
//	int a = 1;
//	int b = 2;
//	printf("%4.1f\n", S(a + b));
//	return 0;
//}
#define sqr(x) ((x)*(x))
#define cube(x) ((x)*(x)*(x))
#define quad(x) ((x)*(x)*(x)*(x))
#define MAX_POWER 10
int main()
{
	int n;
	printf("number\t exp2\t exp3\t exp4\n ");
	printf("----\t----\t-----\t------\n");
	for (n = 1; n <= MAX_POWER; n++)
		printf("%2d\t %3d\t %4d\t %5d\n", n, sqr(n), cube(n), quad(n));

	return 0;
}

//int main()
//{
//	int a = 0.75;
//	printf("%d\n", a);
//	return 0;
//
//}
