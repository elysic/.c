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
//}//ָ�����;������н�����ʱ���ܹ����ʵĿռ��С
//int*p  *p�ܹ�����4�ֽ�
//char*p *p�ܹ�����1���ֽ�
//double*p *p�ܹ�����8�ֽ�
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
//}//ָ�����;���ָ���1�Ӷ���
//int*p p+1-->4  ��һ������
//char*p p+1-->1  ��һ���ַ�
//double*p  p+1-->8//��һ��˫������
  
//Ұָ��
//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ��˳��ֵ
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
//	//int* p = NULL;//������ʼ��ָ�룬��ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;
//	return 0;
//}
//ָ��+-����
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
//ָ��-ָ�� �õ�ָ����ָ���Ԫ�ظ���
/*int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	printf("%d\n", &arr[0] - &arr[9]);
	return 0; 
}*/
//ָ��������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);//��Ϊ��Ԫ�ص�ַ
//	printf("%p\n", &arr);//��������
//	return 0; 
//}

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//����ָ��
//	return 0;
//}