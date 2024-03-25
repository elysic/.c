#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int r = 0;
//	while (r = m % n)
//	{
//		m = n; // 以除数作为被除数
//		n = r; // 以余数作为除数
//	}
//	printf("%d\n", n); // 最后的除数为最大公约数
//	return 0;
//}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	printf("%d\n", gcd(m, n));
	return 0;
}

