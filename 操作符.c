#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���Ʋ�����
 //������λ
 // �ұ߶�������߲�ԭ����λ��
//�߼�����
//�ұ߶�������߲�0
//int main()
//{
//	int a = -1;
//	//1000000000000000000000000000001 ԭ��
//	//1111111111111111111111111111110 ����
//	//1111111111111111111111111111111 ����
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//�Ӽ��� ȱ��������ܳ���int����
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

//���
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
//	int* p = &a;//ȡ��ַ������
//	*p = 20;//�����ò�����
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
//	printf("%d\n", sizeof(p));//ָ����32λΪ4��64λΪ8
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}
//ѧ��
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 0;
//	struct Stu s1 = { "����",20,"20121641" };
//	//ʹ��struct Stu������ʹ���һ��ѧ��s1
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	return 0;
//}
//����ת��
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
//	//11111111111111111111111110000010-����
//	//11111111111111111111111110000001-����
//	//10000000000000000000000001111110-ԭ��
//	printf("%d\n", c); 
//	return 0;
//}
//����ת��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//
//	return 0;
//}