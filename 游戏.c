#define _CRT_SECURE_NO_WARNINGS
void menu()
{
	printf("---------------------------------------------------\n");
	printf("|                                                 |\n");
	printf("|             欢迎来到人生重开模拟器              |\n");
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
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
	} while (input);
	return 0;
}