#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//void menu()
//{
//	printf("---------------------------------------------------\n");
//	printf("|                                                 |\n");
//	printf("|             ��ӭ���������ؿ�ģ����              |\n");
//	printf("|                    1.play                       |\n");
//	printf("|                    2.exit                       |\n");
//	printf("|                                                 |\n");
//	printf("---------------------------------------------------\n");
//
//}
//void game()
//{
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//	return 0;
//int face = 0, strong = 0, iq = 0, home = 0;
//int count = 1;
//while (count)
//{
//	printf("�����ó�ʼ���ԣ����õ�������Ϊ 20��>��\n");
//	printf("��������ֵ��1-10����");
//	scanf("%d", &face);
//	printf("���������ʣ�1-10����");
//	scanf("%d", &strong);
//	printf("������������1-10����");
//	scanf("%d", &iq);
//	printf("������Ҿ���1-10����");
//	scanf("%d", &home);
//	if (face > 10 || face < 1 || strong>10 || strong < 1 || iq>10 || iq < 1 || home>10 || home < 1)
//	{
//		printf("���Ե�������������������\a\n");
//		count++;
//	}
//	else if (face + strong + iq + home > 20)
//	{
//		printf("�����ܺʹ���20������������\a\n");
//		count++;
//	}
//	count--;
//}
//printf("��ʼ����������ϣ�\n");
//printf("��ֵ��%d�����ʣ�%d��������%d���Ҿ���%d\n", face, strong, iq, home);
//
//srand((unsigned int)time(NULL));
//int sex = rand() % 2;
//if (sex == 1)
//{
//	printf("���Ǹ��к�.\n");
//}
//else
//{
//	printf("���Ǹ�Ů��.\n");
//}
int point = rand() % 3;
//��һ��
if (home == 10)
{
	printf("������ڵ۶�����ĸ�ĸ�Ǹ߹���Ҫ.\n");
	home += 1;
	iq += 1;
	face += 1;
}
//�ڶ���
else if (home <= 9 && home >= 7)
{
	if (point == 1)
	{
		printf("������ڴ���У���ĸ�ĸ�ǹ���Ա.\n");
		face += 2;
	}
	else if (point == 2)
	{
		printf("������ڴ���У���ĸ�ĸ����ҵ�߹�.\n");
		home += 2;
	}
	else
	{
		printf("������ڴ���У���ĸ�ĸ�Ǵ�ѧ����.\n");
		iq += 2;
	}
}
//������
else if (home <= 6 && home >= 4)
{
	if (point == 1)
	{
		printf("����������߳��У���ĸ�ĸ��ҽ��.\n");
		strong += 1;
	}
	else if (point == 2)
	{
		printf("����������ϣ���ĸ�ĸ����ʦ.\n");
		iq += 1;
	}
	else
	{
		printf("����������ϣ���ĸ�ĸ�Ǹ��廧.\n");
		home += 1;
	}
}
//���ĵ�
else
{
	if (point == 1)
	{
		printf("�������ũ�壬��ĸ�ĸ������������ũ��.\n");
		strong += 1;
		face -= 2;
	}
	else if (point)
	{
		printf("�����������Ƨ������ĸ�ĸ����ҵ����.\n");
		home -= 1;
	}
	else
	{
		printf("�����������,��ĸ�ĸ���鲻��.\n");
		strong -= 1;
	}
}
printf("��ֵ��%d�����ʣ�%d��������%d���Ҿ���%d\n", face, strong, iq, home);


//}
