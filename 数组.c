#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��������
//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��0
////	char arr2[5] = {'a','b'};
////	char arr3[5] = "ab";
//	printf("%d\n", arr);
////	char arr4[] = "abcdef";
////	printf("%d\n", sizeof(arr4));//7
////	//sizeof  ����arr4��ռ�ռ��С  ������������顢���͵Ĵ�С-��λ���ֽ�--������
////	printf("%d\n", strlen(arr4));//6
////	//strlen  ���ַ�������  ֻ�����ַ���-�⺯��-ʹ��Ҫ����ͷ�ļ�
//	return 0;
//}
//��ά����
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
//	//��arr����������
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
//	printf("%p\n", arr);//��ʼԪ�ص�ַ
//	printf("%p\n", &arr[0]);//��ʼԪ�ص�ַ
//	printf("%p\n", &arr);
//����ĵ�ַ����������ĵ�ַ  sizeof(������)��&������ȡ�������������ַ�����඼����Ԫ�ص�ַ
//size(arr)  &arr
//	printf("%p\n", &arr + 1);
//	return 0;
//}