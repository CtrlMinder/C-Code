#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//百钱买百鸡：母鸡5钱，公鸡3钱，小鸡0.5钱
int main()
{
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	while ((scanf("%d", &x)) != EOF)
	{
		for (a = 1; a < x/5; a++)//母鸡
		{
			for (b = 1; b < x/3; b++)//公鸡
			{
				for (c = 1; c < x / 0.5; c++)//小鸡
				{
					if ((a + b + c == x) && (5 * a + 3 * b + 0.5 * c == x))//满足条件
					{
						printf("%d %d %d\n", a, b, c);//打印母鸡 公鸡 小鸡各多少只
					}
				}
			}
		}
	}
	return 0;
}