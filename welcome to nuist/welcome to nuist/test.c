#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr[] = "welcome to nuist!!!";
	char ch[1000] = { 0 };
	int sz = strlen(arr);
	int i = 0;
	int left = 0;
	int right = sz - 1;
	for (i = 0; i < sz; i++)
	{
		ch[i] = '#';
	}
	for (; left <= right; left++, right--)
	{
		for (i = 0; i < sz; i++)
		{
			if (i <= left || i >= right)
				printf("%c", arr[i]);
			else
				printf("%c", ch[i]);
		}
		printf("\n");
		Sleep(1000);//Ë¯Ãß1Ãë
		system("cls");//Çå¿ÕÆÁÄ»
	}
	/*for (; left <= right; left++, right--)
	{
		ch[left] = arr[left];
		ch[right] = arr[right];
		printf("%s\n", ch);
		Sleep(1000);//Ë¯Ãß1Ãë
		syetem("cls");//Çå¿ÕÆÁÄ»
	}*/
	printf("%s\n", arr);
	if (left > right)
		printf("Êä³öÍê±Ï\n");
	return 0;
}