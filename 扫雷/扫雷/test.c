#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu();
void game();
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
void menu()
{
	printf("**********************************************\n");
	printf("**********      ��ӭ����ɨ����Ϸ     *********\n");
	printf("**********           1. play         *********\n");
	printf("**********           0. exit         *********\n");
	printf("**********************************************\n");
}
void game()
{
	//��������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	char check[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	memcpy(check, mine, sizeof(mine));
	//DisplayBoard(check, ROW, COL);
	FindMine(mine, show, check, ROW, COL);
}