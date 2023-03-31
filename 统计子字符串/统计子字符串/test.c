#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//求一个字符串中子字符串出现的次数
int main()
{
	char ch1[1000] = { 0 };
	char ch2[1000] = { 0 };
	int sz1 = 0;
	int sz2 = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	printf("input string1:\n");
	for (sz1 = 0; (ch1[sz1] = getchar()) != '\n'; sz1++);
	printf("input string2:\n");
	for (sz2 = 0; (ch2[sz2] = getchar()) != '\n'; sz2++);
	for (i = 0; i < sz1; )
	{
		int flag = 1;
		for (j = 0; j < sz2; j++)
		{
			if (ch1[i + j] != ch2[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			i = i + j;
			count++;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", count);
	return 0;
}