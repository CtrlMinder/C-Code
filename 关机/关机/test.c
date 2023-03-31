#define _CRT_SECURE_NO_WARNINGS 1
//关机程序
//运行程序，系统将在60秒后关机，输入：我是猪 可取消关机
//shutdown -s -t 60   60秒后关机   -s设置关机   -t设置时间
//shutdown -a     取消关机
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑将在60秒内关机，输入：我是傻猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是傻猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
