#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//������Ϸ
#include<stdlib.h>
#include<time.h>
void menu();
void game();
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//����һ����������ӣ�����ʱ�亯��,srand����Ҫ�����Ϊunsigned int����
	do
	{
		menu();
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
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}
void menu()//�˵�
{
	printf("*************************************************\n");
	printf("***************��������Ϸ��ʼ��!!!***************\n");
	printf("******************��ѡ��>1/0*******************\n");
	printf("*****************1:  PLAY!!   ********************\n");
	printf("*****************0:  EXIT!!   *******************\n");
	printf("*************************************************\n");
}
void game()
{
	int ret = rand() / 100 + 1;//����һ��1-100֮��������
	int guess = 0;
	while (1)//������
	{
		printf("����������\n");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}