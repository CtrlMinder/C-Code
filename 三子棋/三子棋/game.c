#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//���̳�ʼ��
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
//��ӡ����
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
//���1��
void Player1Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���1��\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�жϸ������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}
//���2��
void Player2Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���2��\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�жϸ������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}
//������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������\n");
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
//�ж�ƽ��
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
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж���
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
	//�ж���
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
	//�ж϶Խ���
	//�ж����Խ���
	int flag = 1;//��־����ʼ��
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
	//�жϸ��Խ���
	flag = 1;//��־������ֵ
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


