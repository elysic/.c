#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int a = 0;
//	printf("���������䣺\n");
//	
//	scanf("%d",&a);
//	if (a > 0 && a <= 18)
//		printf("С�ϵ�\n");
//	else if (a > 18 && a <= 50)
//		printf("�бϵ�\n");
//	else
//		printf("�ϱϵ�\n");
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	printf("������һ������\n");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("Ϊż��\n");
//	else if(a % 2 == 1)
//		printf("Ϊ����\n");
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
//	//��ʼ��    �ж�   ����
//	for (i = 1; i < 10; i++) 
//	{
//		if(i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()//do while���
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
//int main()//����n�Ľ׳�
//{
//	int c = 1;
//	int a = 0;
//	int b = 1;
//	printf("������һ�����֣�\n");
//	scanf("%d", &a);
//	while (b<=a) 
//	{
//		
//		c= c * b;
//		b++;
//	}
//	printf("�����Ľ׳ˣ�%d\n", c);
//	return 0;
//}

//int main()//1��+2��+3��+......+10��
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
//int main()//��һ���ַ�����ĳ��Ԫ��
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ַ�������
//	int left = 0;//���±�
//	int k = 11;
//	int right = sz;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		{
//			printf("�Ҳ���\n");
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


//ʱ�������ǰʱ��-���������ʼʱ�䣨1970.1.1.0��0��0��=��xxxx����
//menu()
//{
//	printf("************************\n");
//	printf("*** 1.play      0.exit***");
//	printf("************************\n");
//}
//game()
//{
//	int guess = 0;
//	//��ʱ���������������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("������֣�\n"); 
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//		case 1:
//			game();
//		default:
//			printf("����ָ�����������\n");
//		}
//	} while (input);
//	return 0;
//}