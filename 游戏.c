#define _CRT_SECURE_NO_WARNINGS
void menu()
{
	printf("---------------------------------------------------\n");
	printf("|                                                 |\n");
	printf("|             ��ӭ���������ؿ�ģ����              |\n");
	printf("|                    1.play                       |\n");
	printf("|                    2.exit                       |\n");
	printf("|                                                 |\n");
	printf("---------------------------------------------------\n");

}
void game()
{

}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}