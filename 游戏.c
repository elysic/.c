#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//void menu()
//{
//	printf("---------------------------------------------------\n");
//	printf("|                                                 |\n");
//	printf("|             欢迎来到人生重开模拟器              |\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//		}
//	} while (input);
//	return 0;
//int face = 0, strong = 0, iq = 0, home = 0;
//int count = 1;
//while (count)
//{
//	printf("请设置初始属性（可用点数总数为 20）>：\n");
//	printf("请输入颜值（1-10）：");
//	scanf("%d", &face);
//	printf("请输入体质（1-10）：");
//	scanf("%d", &strong);
//	printf("请输入智力（1-10）：");
//	scanf("%d", &iq);
//	printf("请输入家境（1-10）：");
//	scanf("%d", &home);
//	if (face > 10 || face < 1 || strong>10 || strong < 1 || iq>10 || iq < 1 || home>10 || home < 1)
//	{
//		printf("属性点输入有误，请重新输入\a\n");
//		count++;
//	}
//	else if (face + strong + iq + home > 20)
//	{
//		printf("属性总和大于20，请重新输入\a\n");
//		count++;
//	}
//	count--;
//}
//printf("初始属性输入完毕！\n");
//printf("颜值：%d，体质：%d，智力：%d，家境：%d\n", face, strong, iq, home);
//
//srand((unsigned int)time(NULL));
//int sex = rand() % 2;
//if (sex == 1)
//{
//	printf("你是个男孩.\n");
//}
//else
//{
//	printf("你是个女孩.\n");
//}
int point = rand() % 3;
//第一档
if (home == 10)
{
	printf("你出生在帝都，你的父母是高管政要.\n");
	home += 1;
	iq += 1;
	face += 1;
}
//第二档
else if (home <= 9 && home >= 7)
{
	if (point == 1)
	{
		printf("你出生在大城市，你的父母是公务员.\n");
		face += 2;
	}
	else if (point == 2)
	{
		printf("你出生在大城市，你的父母是企业高管.\n");
		home += 2;
	}
	else
	{
		printf("你出生在大城市，你的父母是大学教授.\n");
		iq += 2;
	}
}
//第三档
else if (home <= 6 && home >= 4)
{
	if (point == 1)
	{
		printf("你出生在三线城市，你的父母是医生.\n");
		strong += 1;
	}
	else if (point == 2)
	{
		printf("你出生在镇上，你的父母是老师.\n");
		iq += 1;
	}
	else
	{
		printf("你出生在镇上，你的父母是个体户.\n");
		home += 1;
	}
}
//第四档
else
{
	if (point == 1)
	{
		printf("你出生在农村，你的父母是辛苦劳作的农民.\n");
		strong += 1;
		face -= 2;
	}
	else if (point)
	{
		printf("你出生在穷乡僻壤，你的父母是无业游民.\n");
		home -= 1;
	}
	else
	{
		printf("你出生在镇上,你的父母感情不和.\n");
		strong -= 1;
	}
}
printf("颜值：%d，体质：%d，智力：%d，家境：%d\n", face, strong, iq, home);


//}
