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
struct Event
{
	char eve[80];
};
void even(int face, int strong, int iq, int home, int sex, int point)
{
	srand((unsigned int)time(NULL));
	int t = 0, o = 0, w = 0, r = 0, f = 0, v = 0, s = 0, e = 0, n = 0, g = 0;
	int count = 10;
	int age = 1;
	while (count)
	{

		int a = rand() % 10;
		struct Event arr[10];
	again:
		switch (a + 1)
		{
		case 1:
			if (sex == 0 && home <= 3 && point == 1)
			{
				strcpy(arr[0].eve, "��ļ�����������Ů����ǳ����أ��㱻�����ˣ�\n��Ϸ����!");
				printf("%s\n", arr[0].eve);
				count = 1;
			}
			else
			{
				if (o == 0)

				{
					strcpy(arr[0].eve, "ȫ��Χʵ��̼�к͡�");
					o++;
				}
				else
				{
					a = rand((unsigned int)time(NULL)) % 10;
					goto again;
				}
			}
			break;
		case 2:
			if (strong < 6 && point < 3)
			{
				if (home >= 5)
				{
					strcpy(arr[1].eve, "������һ����,����ĸ�ĸϤ���չ��£��㿵����");
					strong += 1;
					home -= 1;
				}
				else
				{
					strcpy(arr[1].eve, "������һ����,��ĸ�ĸû�������㣬�������״���������");
					strong -= 1;
				}
			}
			else
			{
				if (w == 0)

				{
					strcpy(arr[1].eve, "���ǽ��������������ס���ء�");
					w++;
				}
				else
				{
					a = rand() % 10;
					goto again;
				}

			}
			break;
		case 3:
			if (face <= 4 && age >= 7)
			{
				if (iq > 5)
				{
					strcpy(arr[2].eve, "�㳤��̫���ˣ����С���Ѳ�ϲ����,�������ѧϰ����Լ�");
				}
				else
				{
					if (sex == 1)
					{
						strcpy(arr[2].eve, "�㳤��̫���ˣ����С���Ѳ�ϲ����,��ͱ��С���Ѿ�����ܣ�");
						strong += 1;
						iq -= 1;
					}
					else
					{
						strcpy(arr[2].eve, "�㳤��̫���ˣ����С���Ѳ�ϲ����,������������С�����۸�");
						strong -= 1;
					}
				}
			}
			else
			{
				if (r == 0)

				{
					strcpy(arr[2].eve, "ȫ��Χ�ڵ����˼�ʻ���������ռ���");
					r++;
				}
				else
				{
					a = rand() % 10;
					goto again;
				}

			}
			break;
		case 4:
			if (iq < 5)
			{
				if (home >= 8 && age >= 6)
				{
					strcpy(arr[3].eve, "�㿴����ɵɵ�ģ���ĸ�ĸ�����͵����õ�ѧУѧϰ��");
					iq += 1;
				}
				else if (home >= 4 && home <= 7)
				{
					if (sex == 1)
					{
						strcpy(arr[3].eve, "�㿴����ɵɵ�ģ���ĸ�ĸ��������˶�����ȡ��Ϊ�˶�Ա��");
						strong += 1;
					}
					else
					{
						strcpy(arr[3].eve, "�㿴����ɵɵ�ģ���ĸ�ĸ����������Լ���");
						face += 1;
					}
				}
				else
				{
					strcpy(arr[3].eve, "�㿴����ɵɵ�ģ���ĸ�ĸΪ�˾������ܡ�");
					if (point == 1)
						strong -= 1;
					else if (point == 2)
						iq -= 1;
				}
			}
			else
			{
				if (f == 0)

				{
					strcpy(arr[3].eve, "�˹����������๲ͬ�������Ļ���");
					f++;
				}
				else
				{
					a = rand() % 10;
					goto again;
				}
			}
			break;
		case 5:
		{
			if (point == 1)
			{
				strcpy(arr[4].eve, "�㽡���ɳ����㿴��������ʵ�ˡ�");
				strong += 1;
			}
			else if (point == 2)
			{
				strcpy(arr[4].eve, "�㽡���ɳ����㿴�������ÿ��ˡ�");
				face += 1;
			}
			else
			{
				if (v == 0)

				{
					strcpy(arr[4].eve, "���࿪ʼ̽�������������������������ϵ��");
					v++;
				}
				else
				{
					a = rand() % 10;
					goto again;
				}
			}
		}
		break;
		case 6:
			if (s == 0)
			{
				strcpy(arr[5].eve, "����ɹ�ʵ�ֺ˾۱���Դ����ҵ��Ӧ�ã����׽����ԴΣ�����⡣");
				s++;
			}
			else
			{
				a = rand() % 10;
				goto again;
			}
			break;
		case 7:
			if (e == 0)
			{
				strcpy(arr[6].eve, "����ʵ�ּ�����չ��һ��ȫ�µĸ߶ȣ����ǿ�����ʱ�س��������������С�");
				e++;
			}
			else
			{
				a = rand() % 10;
				goto again;
			}
			break;
		case 8:
			if (n == 0)
			{
				strcpy(arr[7].eve, "ȫ��Χ�ڵĸ��ٽ�ͨ����������ɣ����ǿ����ڼ�Сʱ�ڴ�Խ����");
				n++;
			}
			else
			{
				a = rand() % 10;
				goto again;
			}
			break;
		case 9:
			if (g == 0)

			{
				strcpy(arr[8].eve, "�߿�ȡ��Ӣ�����ſ�Ŀ��");
				g++;
			}
			else
			{
				a = rand() % 10;
				goto again;
			}
			break;
		case 10:
			if (t == 0)
			{
				strcpy(arr[9].eve, "ȫ��ʵ���޹��������������ص�ѧ�����ܽ������ʵĽ�����");
				t++;
			}
			else
			{
				a = rand() % 10;
				goto again;
			}
			break;
		}
		if (strong <= 0)
		{
			printf("����� %d ��\n", age);
			if (point == 1)
			{
				printf("��Ⱦ�����¹ڲ�����û�ܿ�ס��������Ϯ�������ˣ�\n");
				printf("��Ϸ����!\n");
				break;
			}
			else if (point == 2)
			{
				printf("����˰�Ѫ��������ȥ��!\n");
				printf("��Ϸ����!\n");
				break;
			}
			else
			{
				printf("��Զ�����ʱ��С�ı�Ǻ���ˣ�\n");
				printf("��Ϸ����!\n");
				break;
			}
		}
		else if (iq <= 0)
		{
			printf("����� %d ��\n", age);
			if (point == 1)
			{
				printf("�㷢���յ�ʱ���������Ʋ���ʱ�����һ�����ϣ�\n");
				printf("��Ϸ����!\n");
				break;
			}
			else if (point == 2)
			{
				printf("�㲻С�ĺ����ձ�����ˮ�����һ�����ϣ�\n");
				printf("��Ϸ����!\n");
				break;
			}
			else
			{
				printf("���ھƾ��ж���������һ������\n");
				printf("��Ϸ����!\n");
				break;
			}
		}
		printf("---------------------------------------------------------------\n");
		print



//}
