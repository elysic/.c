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
//		m = n; // �Գ�����Ϊ������
//		n = r; // ��������Ϊ����
//	}
//	printf("%d\n", n); // ���ĳ���Ϊ���Լ��
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

