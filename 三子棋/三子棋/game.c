#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//棋盘初始化
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家1走
void Player1Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家1走\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		//判断输入的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断该坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
//玩家2走
void Player2Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家2走\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		//判断输入的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断该坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
//电脑走
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断平局
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
}
//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		int flag = 1;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] != board[i][j + 1])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1 && board[i][1] != ' ')
			return board[i][1];
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		int flag = 1;
		for (j = 0; j < row-1; j++)
		{
			if (board[j][i] != board[j + 1][i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1 && board[1][i] != ' ')
			return board[1][i];
	}
	//判断对角线
	//判断主对角线
	int flag = 1;//标志量初始化
	for (i = 0; i < row-1; i++)
	{
		if (board[i][i] != board[i + 1][i + 1])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1 && board[0][0] != ' ')
		return board[i][i];
	//判断副对角线
	flag = 1;//标志量赋初值
	for (i = 0; i < row - 1; i++)
	{
		if (board[i][row - 1 - i] != board[i + 1][row - 1 - (i + 1)])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1 && board[i][row - 1 - i] != ' ')
		return board[i][row - 1 - i];
	
	if (IsFull(board, row, col))
		return 'Q';
	return 'C';
}


