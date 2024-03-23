#define _CRT_SECURE_NO_WARNINGS
int is_prime(int n)//求素数
//{
//	int j= 0;
//
//	for (j = 2; j < n; j++)//素数除以2到自己的数都有余
//	{
//		if (n % j == 0)
//			return 0;
//	}
//
//
//	return 1;
//
//}
//
//
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++) 
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}