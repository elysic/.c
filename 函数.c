#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;  
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n",sum);
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	char arr1[20] = "############";
//	strcpy(arr1, arr);
//	printf("%s\n",arr1);
//	return 0;
//}
//自定义函数
//Swap(int*px, int*py)//指针
//{
//	int tmp = 0;
//	tmp =*px;
//	*px = *py;
//	*py = tmp;
//} 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a,b);
//	Swap(&a,&b);//传址调用 
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}
//int is_prime(int n)//求素数
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

//二分查找（有序数列）
//找到返回下标，找不到返回-1

//int search(int arr[], int k,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);数组传递的是首元素地址  本质arr是指针
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, k,sz );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("是：%d\n", ret);
//	}
//	return 0
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	return 0;
//}
//引用函数
#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 2;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0; 
//}
//int mystrlen(char*str)//自制strlen
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//int mystrlen(char* str)//递归
//{
//	if (*str != 0)
//		return 1 + mystrlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[]="bit";
//	int len = mystrlen(arr);//arr是数组，数组传叁，传过去的不是数组，而是第一个元素地址
//	printf("len=%d\n", len);
//	return 0;                            
//}
// 
//int Fib(int n)//描述第n个斐波那契数
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//太过麻烦
//int Fib(int n)//斐波那契
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//
//	printf("%d\n", ret);
//	return 0;
//}
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














































































 