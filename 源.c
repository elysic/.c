#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//����stdio.h���ļ�#include<stdio.h>
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
	//define����ı�ʶ������
	//int arr[Max] = { 0 };
	//printf("%d\n", Max);
	//return 0;
//}
	/*int main()//  strlen
	{
		char arr[] = "abc";//������/0��
		char arr1[] = {'a', 'b', 'c'};//��/0�����ַ����Ľ�����־�������ַ�������   ��f10����ڴ򿪼��Ӵ���
		//a-97
		//A-65
		//......
		//ASCLL����
		//printf("%s\n", arr);
		//printf("%s\n", arr1);
		printf("%d\n", strlen(arr));//strlen-string length-�����ַ�������
		printf("%d\n", strlen(arr1));
		return 0;

	}*/


	//int main() 
	//{
	//	printf("%d\n", strlen("c:\test\32\test.c"));
	//	//\32----��2��8��������
	//	//32--ʮ����26--��Ϊascll��ֵ������ַ�
	//	//32��Ϊ8���ƴ�����Ǹ�10�������֣���Ϊascll��ֵ����Ӧ���ַ�
	//	return 0;                    
	//}
	//int main() 
	//{
	//	int input = 0;
	//	printf("�������\n");
	//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
	//	scanf_s("%d", &input);//1/0;
	//	if (input == 1)
	//		printf("��offer\n");
	//	else
	//		printf("������\n");
	//
	//
	//
	//	return 0;
	//}
	//int main() 
	//{
	//	int line = 0;
	//	printf("�������\n");
	//	while (line < 20)
	//	{
	//		printf("��һ�д���%d\n",line);
	//		line++;
	//
	//	}
	//	if (line >= 20)
	//		printf("��offer\n");
	//	return 0;
	//
	//	
	//}


	 //�Զ��庯�����
	//Ӧ�������ļ�����extern

	//int main()
	//{
	//	int sum = 0;
	//	extern int Add(int ,int);//�����ⲿ����
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
	//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
	//	int i = 0;
	//	while (i < 10)
	//	{
	//		printf("%d\n", arr[i]);
	//		i++;
	//	}
	//	//printf("%d\n", arr[4]);//4�����±꣬�±��0��ʼ
	//	return 0;



	//int main()
	//{
	//	int a = 1;
	//	//����1ռ4���ֽ�-32��bitλ
	//	//00000000000000000000000000000001�������ƣ�
	//	int b = a << 1;//b=0000000000000000000000000000010 ���ȥ��һλ���ұ߼���һ��0
	//	printf("%d\n", b);
	//	return 0;
	//}


	//int main() 
	//{
	//	//2���Ʋ���
	//	//&��λ��(��Ӧ������λ��ͬΪ1������Ϊ0)    |��λ��(��Ӧ������λ��һ��1��Ϊ1)    ^��λ��� (��Ӧ������λ��ͬΪ0������Ϊ1)���㽻����
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
	//	//sizeof������Ǳ���/������ռ�ռ��С����λ���ֽ�
	//	//����1ռ4���ֽ� - 32��bitλ
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
	//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
	//	printf("%d\n", b);//��ӡ�����������ԭ�� 
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
//	static int a = 1;//a��һ����̬�ľֲ�����
//	//static���ξֲ��������ֲ������������ڱ䳤
//	//static����ȫ�ֱ�����ʹȫ�ֱ���ֻ���ڵ�ǰ�ļ���ʹ�ã��ı����������
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
//	//extern-�����ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0 ;
//}
//�����ⲿ����
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
//	int a = 10;//10���ֽ�
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//*-�����ò�����
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
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


//���Ӷ���
//struct Book//�����ṹ��
//{
//	char name[20];//c���Գ������
//	short price;//55
//
//};
//int main()//�����ýṹ�����͵ı���
//{
//	struct Book b1 = { "c���Գ������",55};
//	struct Book* pb = &b1;
//	����pb(ָ�����)��ӡ��������۸�
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	�ṹ�����.��Ա
//	�ṹ�����->��Ա  
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}

