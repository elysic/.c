#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Initboard(int board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < col; j++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = "";
		}

	}


}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡһ�е�����
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		//��ӡ�ָ���
		printf("---|---|---\n");
	}
}