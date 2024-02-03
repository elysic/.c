#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//创建数组
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认0
////	char arr2[5] = {'a','b'};
////	char arr3[5] = "ab";
//	printf("%d\n", arr);
////	char arr4[] = "abcdef";
////	printf("%d\n", sizeof(arr4));//7
////	//sizeof  计算arr4所占空间大小  计算变量、数组、类型的大小-单位是字节--操作符
////	printf("%d\n", strlen(arr4));//6
////	//strlen  求字符串长度  只能求字符串-库函数-使用要引用头文件
//	return 0;
//}
//二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	return 0;
//}
//bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//将arr按升序排列
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);//起始元素地址
//	printf("%p\n", &arr[0]);//起始元素地址
//	printf("%p\n", &arr);
//数组的地址，整个数组的地址  sizeof(数组名)和&数组名取的是整个数组地址，其余都是首元素地址
//size(arr)  &arr
//	printf("%p\n", &arr + 1);
//	return 0;
//}