#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()//打印菜单
{
	printf("********************************\n");
	printf("********    1: play    *********\n");
	printf("********    0: exit    *********\n");
	printf("********************************\n");
}
void game()//游戏
{
	char board[ROW][COL] = { 0 };//定义一个数组
	char ret = 0;
	//棋盘初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家走
		Player1Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑走
		ComputerMove(board, ROW, COL);
		//玩家2走
		//Player2Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("恭喜玩家1胜利!!!\n");
	}
	else if (ret == '#')
	{
		printf("恭喜玩家2胜利!!!\n");
		//printf("很可惜，电脑胜利\n");
	}
	else
		printf("平局，再接再厉\n");
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}