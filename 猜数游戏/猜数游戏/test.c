#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//猜数游戏
#include<stdlib.h>
#include<time.h>
void menu();
void game();
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//设置一个随机数种子，调用时间函数,srand函数要求参数为unsigned int类型
	do
	{
		menu();
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
			printf("重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
void menu()//菜单
{
	printf("*************************************************\n");
	printf("***************猜数字游戏开始了!!!***************\n");
	printf("******************请选择：>1/0*******************\n");
	printf("*****************1:  PLAY!!   ********************\n");
	printf("*****************0:  EXIT!!   *******************\n");
	printf("*************************************************\n");
}
void game()
{
	int ret = rand() / 100 + 1;//设置一个1-100之间的随机数
	int guess = 0;
	while (1)//猜数字
	{
		printf("请输入数字\n");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}