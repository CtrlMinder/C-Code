#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()//��ӡ�˵�
{
	printf("********************************\n");
	printf("********    1: play    *********\n");
	printf("********    0: exit    *********\n");
	printf("********************************\n");
}
void game()//��Ϸ
{
	char board[ROW][COL] = { 0 };//����һ������
	char ret = 0;
	//���̳�ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�����
		Player1Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//������
		ComputerMove(board, ROW, COL);
		//���2��
		//Player2Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("��ϲ���1ʤ��!!!\n");
	}
	else if (ret == '#')
	{
		printf("��ϲ���2ʤ��!!!\n");
		//printf("�ܿ�ϧ������ʤ��\n");
	}
	else
		printf("ƽ�֣��ٽ�����\n");
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}