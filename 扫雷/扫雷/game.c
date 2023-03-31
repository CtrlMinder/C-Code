#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//棋盘初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------扫雷-------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------扫雷-------------\n");
}
//设置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_SET;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//排查坐标所在周围有多少雷
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = (x - 1); i <= (x + 1); i++)
	{
		for (j = (y - 1); j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], char check[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<(row*col-EASY_SET))
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断坐标所在处是不是雷并且未排查过
			if (check[x][y] != '1' && check[x][y] != '2')
			{
				//check棋盘坐标所在处赋值为2
				check[x][y] = '2';
				//排查坐标周围有多少雷
				int ret = GetMine(mine, x, y) + '0';
				show[x][y] = ret;
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else if (check[x][y] == '2')
			{
				printf("坐标已被排查，请重新输入\n");
			}
			else
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == (row * col - EASY_SET))
	{
		printf("恭喜你，扫雷成功!!!\n");
		DisplayBoard(mine, ROW, COL);
	}
}