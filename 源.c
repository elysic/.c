#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 5, b = 8;
//	float x = 33.5678, y = -567.123;
//	char c = 'A';
//	long n = 12334567;
//	unsigned u = 65535;
//	printf("%d %d\n", a, b);
//	printf("%3d %3d\n", a, b);
//	printf("%10f %-10f\n", x, y);
//	printf("%e %10.2e\n", x, y);
//	printf("%c %d %o %x\n", c, c, c, c);
//	printf("%1d %1o %1x %x\n", n, n, n, n);
//	printf("%u %d %o %X\n", u, u, u, u);
//	printf("%s %3.2s\n", "CHINA", "CHINA");
//printf("安232刘文杰23904452\n");
//	return(0);
//}

//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%d b=%d", &a, &b);
//	scanf("%f,%f", &x, &y);
//	scanf("%c %c", &c1, &c2);
//	printf("%d %d %f %f  %c %c", a, b, x, y, c1, c2);
// printf("安232刘文杰23904452\n");
//	return(0);
//}
//int main()
//{
//	int a, b, c;
//	scanf("%2d%3d*%2d%3d", &a, &b, &c);
//	printf("\na=%d,b=%d,c=%d", a, b, c);
// printf("安232刘文杰23904452\n");
//	return(0);
//}
//int main()
//{
//	int c;
//	char d;
//	c = 66;
//	d = 'B';
//	putchar(c);
//	putchar(d);
//
//	putchar('B');
//	putchar(66);
//	c = 68;
//	c = 68;
//	d = 'D';
//	putchar(c);
//	putchar(d);
//	putchar('B');
//	putchar(66);
//	printf("安232刘文杰23904452\n");
//	return (0);
//}
//int main()
//{
//	int a = -1;
//	long b = -2;
//	float f = 123.456;
//	char c = 'a';
//	printf("a=%d,a=%o,a=%x,a=%u\n", a, a, a, a);
//	printf("b=%1d,b=%1o,b=%1x,b=%1u\n",b, b, b, b);
//	printf("f=%f,f=%7.2f,f=%-7.2f\nf=%e.f=%g\n",f,f,f,f,f);
//	printf("c=%c,c=%3c,c=%-3c,c=%d,c=%c\n", c, c, c, 'a', 65);
//	printf("s1=%s,s2=%7.3s,s3=%-7.3s\n", "12345", "ABCD", "12345");
//	
//	printf("安232刘文杰23904452\n");
//	return  (0);
//}

//int main()
//{
//	int n, x1, x2, x3, y;
//	printf("Please input number n：");
//	scanf("%3d", &n);
//	x1 = n / 100;
//	x2 = n / 10 % 10;
//	x3 = n % 100;
//	y = x3 * 100 + x2 * 10 + x1;
//	printf("y=%d\n", y);
//	printf("安232刘文杰23904452\n");
//	return (0);
//}





//int main()
//{
//	float a = 2.5, b = 3.4;
//	int c, d;
//	c = (a > b);
//	d = (c == 0);
//	printf("%d%d\n", c, d);
//	printf("安232刘文杰23904452\n");
//	return (0);
//}
//int main()
//{
//	int op1, op2, result;
//	char operato;
//	scanf("%d", &op1);
//	operato = getchar();
//	while (operato != '=')
//	{
//		scanf("%d", &op2);
//		switch(operato)
//		{
//		case'+':result = op1 + op2; break;
//		case'-':result = op1 - op2; break;
//		case'*':result = op1 * op2; break;
//		case'/':result = op1 / op2; break;
//		default:result = 0;
//		}
//		op1 = result;
//		operato = getchar();
//	}
//	printf("%d\n", result);
//	printf("安232刘文杰23904452\n");
//	return(0);
//}
//int main()
//{
//	int testnum, remainder;
//	printf("Enter your number to be tested.\n");
//	scanf("%d", &testnum);
//	remainder = testnum % 2;
//	if (remainder == 0)
//		printf("The number is even.\n");
//	else
//		printf("The number is odd.\n");
//	printf("安232刘文杰23904452\n");
//	return(0);
//
//}
//int main()
//{
//	int a;
//	printf("请输入数字\n");
//	scanf("%d", &a);
//	if (a / 3 == 0 && a / 5 == 0 && a / 7 == 0)
//	{
//		printf("能够同时被3，5，7整除");
//	}
//	else
//		printf("不能同时被3，5，7整除");
// printf("安232刘文杰23904452\n");
//	return(0);
//}

//int main()
//{
//	float i,j;
//	int k;
//	printf("输入你的利润\n");
//	scanf("%f", &i);
//	if (i > 0 && i <= 100000)
//	{
//		j = i * 0.1;
//	}
//	else if (i <= 200000)
//	{
//		j = 100000 * 0.1 + (i - 100000) * 0.075;
//	}
//	else if (i > 200000 && i <= 400000)
//		k = 1;
//	else if (i > 400000 && i <= 600000)
//		k = 2;
//	else if (i > 600000 && i <= 100000)
//		k = 3;
//	switch (k)
//	{
//		case(1):j = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05; break;
//		case(2): j = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03; break;
//		case(3) :j = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015; break;
//	}
//	printf("安232刘文杰23904452\n");
//	printf("利润是：%f", j);
//	return(0);
//}

int main()
{
	int a;
	printf("请输入你的数字\n", &a);
	scanf("%d", &a);
	if (a / 10000 != 0)
	{
		printf("5位数");
		printf("每位数字为:%d  %d  %d  %d  %d\n", a / 10000, a % 10000 / 1000, a % 10000 % 1000 / 100, a % 10000 % 1000 % 100 / 10, a % 10000 % 1000 % 100 % 10);
	}
	else if (a / 1000 != 0)
	{
		printf("4位数");
		printf("每位数字为:%d  %d  %d  %d\n", a / 1000, a % 1000 / 100, a % 1000 % 100 / 10, a % 1000 % 100 % 10);
	}
	else if (a / 100 != 0)
	{
		printf("3位数");
		printf("每位数字为: % d % d % d\n ", a / 100, a % 100 / 10, a % 100 % 10);
	}
	else if (a / 10 != 0)
	{
		printf("2位数");
		printf("每位数字为:%d  %d \n  ", a  / 10, a  % 10);
	}
	else
	{
		printf("1位数");
		printf("每位数字为:%d \n", a);
	}
	printf("安232刘文杰23904452\n");
	return(0);


}