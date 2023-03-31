#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//���̳�ʼ��
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
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------ɨ��-------------\n");
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
	printf("------------ɨ��-------------\n");
}
//������
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
//�Ų�����������Χ�ж�����
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
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], char check[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<(row*col-EASY_SET))
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж��������ڴ��ǲ����ײ���δ�Ų��
			if (check[x][y] != '1' && check[x][y] != '2')
			{
				//check�����������ڴ���ֵΪ2
				check[x][y] = '2';
				//�Ų�������Χ�ж�����
				int ret = GetMine(mine, x, y) + '0';
				show[x][y] = ret;
				DisplayBoard(show, ROW, COL);
				win++;
			}
			else if (check[x][y] == '2')
			{
				printf("�����ѱ��Ų飬����������\n");
			}
			else
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == (row * col - EASY_SET))
	{
		printf("��ϲ�㣬ɨ�׳ɹ�!!!\n");
		DisplayBoard(mine, ROW, COL);
	}
}