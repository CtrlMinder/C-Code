#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void reverse(char* left, char* right);
int main()
{
	char ch[1000] = { 0 };
	int sz = 0;
	while ((ch[sz++] = getchar()) != '\n');
	ch[--sz] = '\0';
	reverse(ch, ch + sz - 1);//���������ַ���
	char* start = ch;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);//����ÿ������
		if (*end != '\0')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	for (sz = 0; ch[sz] != '\0'; sz++)
	{
		putchar(ch[sz]);
	}
	return 0;
}
void reverse(char* left, char* right)//�����ַ���
{
	while (left < right)
	{
		char temp = 0;
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}