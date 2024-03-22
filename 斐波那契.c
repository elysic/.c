#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Fib(int n)//描述第n个斐波那契数
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//太过麻烦
int Fib(int n)//斐波那契
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);

	printf("%d\n", ret);
	return 0;
}
//int TJ(int n)//一次上两个或一个台阶，n个台阶的上法
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//	{
//		int a = 1;
//		int b = 2;
//		int  c = 0;
//		while (n>2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	 int ff = TJ(n);
//	printf("%d\n", ff);
//	return 0;
//}

