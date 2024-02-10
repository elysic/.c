#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//右移操作符
 //算数移位
 // 右边丢弃，左边补原符号位、
//逻辑右移
//右边丢弃，左边补0
//int main()
//{
//	int a = -1;
//	//1000000000000000000000000000001 原码
//	//1111111111111111111111111111110 反码
//	//1111111111111111111111111111111 补码
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//加减法 缺点数大可能超过int上限
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d,%d\n", a, b);
//	return 0;
//}

//异或法
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d\n", a, b);
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;0
//	char b = 'r';2	
//	char* p = &b;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//	printf("%d\n", sizeof(b));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(p));//指针在32位为4，64位为8
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}
//学生
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 0;
//	struct Stu s1 = { "张三",20,"20121641" };
//	//使用struct Stu这个类型创建一个学生s1
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	return 0;
//}
//类型转换
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011--a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111--b
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010--c
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001-反码
//	//10000000000000000000000001111110-原码
//	printf("%d\n", c); 
//	return 0;
//}
//算术转换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//
//	return 0;
//}