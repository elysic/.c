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
				strcpy(arr[0].eve, "你的家里人重男轻女观念非常严重，你被遗弃了！\n游戏结束!");
				printf("%s\n", arr[0].eve);
				count = 1;
			}
			else
			{
				if (o == 0)

				{
					strcpy(arr[0].eve, "全球范围实现碳中和。");
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
					strcpy(arr[1].eve, "你生了一场病,在你的父母悉心照顾下，你康复了");
					strong += 1;
					home -= 1;
				}
				else
				{
					strcpy(arr[1].eve, "你生了一场病,你的父母没精力管你，你的身体状况更糟糕了");
					strong -= 1;
				}
			}
			else
			{
				if (w == 0)

				{
					strcpy(arr[1].eve, "火星建立永久性人类居住基地。");
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
					strcpy(arr[2].eve, "你长得太丑了，别的小朋友不喜欢你,你决定用学习填充自己");
				}
				else
				{
					if (sex == 1)
					{
						strcpy(arr[2].eve, "你长得太丑了，别的小朋友不喜欢你,你和别的小朋友经常打架！");
						strong += 1;
						iq -= 1;
					}
					else
					{
						strcpy(arr[2].eve, "你长得太丑了，别的小朋友不喜欢你,你进常被被别的小朋友欺负");
						strong -= 1;
					}
				}
			}
			else
			{
				if (r == 0)

				{
					strcpy(arr[2].eve, "全球范围内的无人驾驶汽车技术普及。");
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
					strcpy(arr[3].eve, "你看起来傻傻的，你的父母把你送到更好的学校学习。");
					iq += 1;
				}
				else if (home >= 4 && home <= 7)
				{
					if (sex == 1)
					{
						strcpy(arr[3].eve, "你看起来傻傻的，你的父母鼓励你多运动，争取成为运动员。");
						strong += 1;
					}
					else
					{
						strcpy(arr[3].eve, "你看起来傻傻的，你的父母鼓励你多打扮自己。");
						face += 1;
					}
				}
				else
				{
					strcpy(arr[3].eve, "你看起来傻傻的，你的父母为此经常吵架。");
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
					strcpy(arr[3].eve, "人工智能与人类共同创造新文化。");
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
				strcpy(arr[4].eve, "你健康成长，你看起来更结实了。");
				strong += 1;
			}
			else if (point == 2)
			{
				strcpy(arr[4].eve, "你健康成长，你看起来更好看了。");
				face += 1;
			}
			else
			{
				if (v == 0)

				{
					strcpy(arr[4].eve, "人类开始探索宇宙深处，与外星文明建立联系。");
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
				strcpy(arr[5].eve, "人类成功实现核聚变能源的商业化应用，彻底解决能源危机问题。");
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
				strcpy(arr[6].eve, "虚拟实现技术发展到一个全新的高度，人们可以随时地沉浸到虚拟世界中。");
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
				strcpy(arr[7].eve, "全球范围内的高速交通网络初步建成，人们可以在几小时内穿越地球。");
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
				strcpy(arr[8].eve, "高考取消英语这门科目。");
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
				strcpy(arr[9].eve, "全球实现无国界教育，世界各地的学生都能接受优质的教育。");
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
			printf("你今年 %d 岁\n", age);
			if (point == 1)
			{
				printf("你染上了新冠病毒，没能抗住病毒的侵袭，你死了！\n");
				printf("游戏结束!\n");
				break;
			}
			else if (point == 2)
			{
				printf("你得了白血病，不幸去世!\n");
				printf("游戏结束!\n");
				break;
			}
			else
			{
				printf("你吃东西的时候不小心被呛死了！\n");
				printf("游戏结束!\n");
				break;
			}
		}
		else if (iq <= 0)
		{
			printf("你今年 %d 岁\n", age);
			if (point == 1)
			{
				printf("你发高烧的时候，由于治疗不及时变成了一个智障！\n");
				printf("游戏结束!\n");
				break;
			}
			else if (point == 2)
			{
				printf("你不小心喝了日本核污水变成了一个智障！\n");
				printf("游戏结束!\n");
				break;
			}
			else
			{
				printf("由于酒精中毒，你变成了一个智障\n");
				printf("游戏结束!\n");
				break;
			}
		}
		printf("---------------------------------------------------------------\n");
		print



//}
