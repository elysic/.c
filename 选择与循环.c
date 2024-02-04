#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int a = 0;
//	printf("请输入年龄：\n");
//	
//	scanf("%d",&a);
//	if (a > 0 && a <= 18)
//		printf("小毕登\n");
//	else if (a > 18 && a <= 50)
//		printf("中毕登\n");
//	else
//		printf("老毕登\n");
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("为偶数\n");
//	else if(a % 2 == 1)
//		printf("为奇数\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10) 
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}
  
//int main()
//{
//	int i = 0;
//	//初始化    判断   调整
//	for (i = 1; i < 10; i++) 
//	{
//		if(i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()//do while语句
//{
//	int i = 1;
//	do 
//	{
//		printf("%d", i);
//		i++;
//		if (i == 5)
//			break;
//	} 
//	while (i <= 10);
//		
//}
//int main()//计算n的阶乘
//{
//	int c = 1;
//	int a = 0;
//	int b = 1;
//	printf("请输入一个数字；\n");
//	scanf("%d", &a);
//	while (b<=a) 
//	{
//		
//		c= c * b;
//		b++;
//	}
//	printf("该数的阶乘：%d\n", c);
//	return 0;
//}

//int main()//1！+2！+3！+......+10！
//{
//	int a = 0;
//	int b = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <=10; n++)
//	{
//		for (b=1,a = 1; a <= n; a++) 
//		{
//			b = b * a;
//		}
//	
//		sum = sum + b;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()//找一个字符串中某个元素
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//字符串个数
//	int left = 0;//左下标
//	int k = 11;
//	int right = sz;//右下标
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		{
//			printf("找不到\n");
//		}
//	
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcomr to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//		
//		left++;
//		right--;
//	}
//	return 0;
//}


//时间戳：当前时间-计算机的起始时间（1970.1.1.0：0：0）=（xxxx）秒
//menu()
//{
//	printf("************************\n");
//	printf("*** 1.play      0.exit***");
//	printf("************************\n");
//}
//game()
//{
//	int guess = 0;
//	//用时间戳设置随机数起点
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字：\n"); 
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int) time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//		case 1:
//			game();
//		default:
//			printf("错误指令，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}