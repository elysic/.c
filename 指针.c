#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	/*printf("%d\n", sizeof(char*));*/
//	return 0;
//}//指针类型决定进行解引用时，能够访问的空间大小
//int*p  *p能够访问4字节
//char*p *p能够访问1个字节
//double*p *p能够访问8字节
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//000000c7d41cf8a4
//	printf("%p\n", pa+1);//000000c7d41cf8a8
//
//	printf("%p\n", pc);//000000c7d41cf8a4
//	printf("%p\n", pc+1);//000000c7d41cf8a5
//	return 0;
//}//指针类型决定指针加1加多少
//int*p p+1-->4  加一个整形
//char*p p+1-->1  加一个字符
//double*p  p+1-->8//加一个双浮点型
  
//野指针
//int main()
//{
//	//int a;//局部变量不初始化，默认顺机值
//	int* p;
//	*p = 20;
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++)=1;
//	}
//	printf("%p\n", *p);
//	return 0;
//}
// 
//int main()
//{
//	//int* p = NULL;//用来初始化指针，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;
//	return 0;
//}
//指针+-整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}
//指针-指针 得到指针与指针间元素个数
/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	printf("%d\n", &arr[0] - &arr[9]);
	return 0; 
}*/
//指针与数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);//均为首元素地址
//	printf("%p\n", &arr);//整个数组
//	return 0; 
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//	return 0;
//}