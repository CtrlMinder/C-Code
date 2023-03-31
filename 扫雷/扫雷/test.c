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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始！\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
void menu()
{
	printf("**********************************************\n");
	printf("**********      欢迎来到扫雷游戏     *********\n");
	printf("**********           1. play         *********\n");
	printf("**********           0. exit         *********\n");
	printf("**********************************************\n");
}
void game()
{
	//建立棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	char check[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//设置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	memcpy(check, mine, sizeof(mine));
	//DisplayBoard(check, ROW, COL);
	FindMine(mine, show, check, ROW, COL);
}