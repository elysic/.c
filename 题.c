#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//说出某一天是这一年的第几天
//int main()
//{
//	int day, month, year;
//	printf("please input year month day\n");
//	scanf("%d,%d,%d", &year, &month, &day);
//	int sum = 0;
//	switch (month)
//	{
//	case 1:printf("1yue\n"); sum = 0; break;
//	case 2:printf("2yue\n"); sum = 31; break;
//	case 3:printf("3yue\n"); sum = 59; break;
//	default:printf("holiday\n"); break;
//	}
//	if (year % 4 == 0 && year % 100 == 0)
//	{
//		if (month > 2)
//		{
//			sum++;
//		}
//	}
//	sum = sum + day;
//	printf("总天数为：%d\n", sum);
//	return(0);
//}
// 
// 99乘法表
//int main()
//{
//	int i ,a;
//	for (i = 1; i < 10; i++)
//	{
//		for (a = 1; a <= i; a ++ )
//		{
//			printf("%2d*%d=%2d",a,i, a * i);
//			printf(" ");
//			
//		}
//		printf("\n");
//	}
//	return(0);
//}
