#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//包含stdio.h的文件#include<stdio.h>
#include<string.h>

//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{ 
//	int num1 = 1;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	/*scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);*/
//	return 0;
//	printf("%d\n",sizeof(int));
//}

//#define Max 10
//int main()
//{
	/*const int num = 4;
	printf("%d\n", num);
	int num = 6;
	printf("%d\n", num);
	return 0;*/
	//define定义的标识符常量
	//int arr[Max] = { 0 };
	//printf("%d\n", Max);
	//return 0;
//}
	/*int main()//  strlen
	{
		char arr[] = "abc";//包含（/0）
		char arr1[] = {'a', 'b', 'c'};//（/0）是字符串的结束标志，不算字符串内容   先f10检查在打开监视窗口
		//a-97
		//A-65
		//......
		//ASCLL编码
		//printf("%s\n", arr);
		//printf("%s\n", arr1);
		printf("%d\n", strlen(arr));//strlen-string length-计算字符串长度
		printf("%d\n", strlen(arr1));
		return 0;

	}*/


	//int main() 
	//{
	//	printf("%d\n", strlen("c:\test\32\test.c"));
	//	//\32----是2个8进制数字
	//	//32--十进制26--作为ascll码值代表的字符
	//	//32作为8进制代表的那个10进制数字，作为ascll码值，对应的字符
	//	return 0;                    
	//}
	//int main() 
	//{
	//	int input = 0;
	//	printf("加入比特\n");
	//	printf("你要好好学习吗？(1/0)>:");
	//	scanf_s("%d", &input);//1/0;
	//	if (input == 1)
	//		printf("好offer\n");
	//	else
	//		printf("卖红薯\n");
	//
	//
	//
	//	return 0;
	//}
	//int main() 
	//{
	//	int line = 0;
	//	printf("加入比特\n");
	//	while (line < 20)
	//	{
	//		printf("敲一行代码%d\n",line);
	//		line++;
	//
	//	}
	//	if (line >= 20)
	//		printf("好offer\n");
	//	return 0;
	//
	//	
	//}


	 //自定义函数设计
	//应用其他文件函数extern

	//int main()
	//{
	//	int sum = 0;
	//	extern int Add(int ,int);//声明外部函数
	//	int a = 100;
	//	int b = 200;
	//	sum = Add(a, b);
	//	printf("sum=%d\n", sum);
	//	/*scanf_s("%d%d", &num1, &num2);
	//	sum = num1 + num2;
	//	printf("sum=%d\n",sum);*/
	//	return 0;
	//	//printf("%d\n",sizeof(int));
	//}


	//int main()
	//{
	//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
	//	int i = 0;
	//	while (i < 10)
	//	{
	//		printf("%d\n", arr[i]);
	//		i++;
	//	}
	//	//printf("%d\n", arr[4]);//4代表下标，下标从0开始
	//	return 0;



	//int main()
	//{
	//	int a = 1;
	//	//整形1占4个字节-32个bit位
	//	//00000000000000000000000000000001（二进制）
	//	int b = a << 1;//b=0000000000000000000000000000010 左边去掉一位，右边加上一个0
	//	printf("%d\n", b);
	//	return 0;
	//}


	//int main() 
	//{
	//	//2进制操作
	//	//&按位与(对应二进制位相同为1，相异为0)    |按位或(对应二进制位有一个1则为1)    ^按位异或 (对应二进制位相同为0，相异为1)满足交换律
	//	int a = 3;
	//	//011
	//	int b = 5;
	//	//101
	//	int c = a|b;
	//	printf("%d\n", c);
	//	return 0;
	//}
	//int main() 
	//{
	//	int a = 10;
	//	int arr[10];
	//	//sizeof计算的是变量/类型所占空间大小，单位是字节
	//	//整形1占4个字节 - 32个bit位
	//	printf("%d\n", sizeof a); 
	//	printf("%d\n", sizeof(int));
	//	printf("%d\n", sizeof arr);
	//	return 0;


	//int main() 
	//{
	//	int a = 0;
	//	//00000000000000000000000000000000
	//	int b = ~a;
	//	//11111111111111111111111111111111
	//	//负数在内存中存储的时候，存储的是二进制的补码
	//	printf("%d\n", b);//打印的是这个数的原码 
	//	return 0;
	//}

//int main() 
//{
//	int arr[10] = { 2,2,3,2,6};
//	printf("%d\n", arr[5]);
//	return 0;
//
//}

//test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	//static修饰局部变量，局部变量生命周期变长
//	//static修饰全局变量，使全局变量只可在当前文件内使用，改变变量作用域
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}
//int main()
//{
//	//extern-声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0 ;
//}
//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;//10个字节
//	int* p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//*-解引用操作符
//	//有一种变量是用来存放地址的-指针变量
// }
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", *pc);
//	return 0;
//
//}


//复杂对象
//struct Book//创建结构体
//{
//	char name[20];//c语言程序设计
//	short price;//55
//
//};
//int main()//创建该结构体类型的变量
//{
//	struct Book b1 = { "c语言程序设计",55};
//	struct Book* pb = &b1;
//	利用pb(指针变量)打印出书名与价格
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	结构体变量.成员
//	结构体变量->成员  
//	printf("书名；%s\n", b1.name);
//	printf("价格；%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格；%d\n", b1.price);
//	return 0;
//}

