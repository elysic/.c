#define _CRT_SECURE_NO_WARNINGS
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
//}
