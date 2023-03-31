#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch[10000] = { 0 };
	int i = 0;
	int flag = 1;
	int count = 1;
	for (i = 0; (ch[i] = getchar()) != '\n'; i++);
	ch[i] = '\0';
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			count++;
			flag = 1;
		}
	}
	printf("%d\n", count);
	return 0;
}
