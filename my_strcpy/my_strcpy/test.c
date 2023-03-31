#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>//assert引用的头文件
char* my_strcpy(char*, const char*);//函数声明 - 模拟实现strcpy库函数
int main()//函数环境的创建
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	scanf("%s %s", arr1, arr2);//读取两个字符串
	my_strcpy(arr1, arr2);//函数调用
	printf("%s\n", arr1);//打印arr1
	return 0;
}
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//断言
	assert(src != NULL);
	char* start = dest;//记录目标地址
	while (*dest++ = *src++);//实现字符串的拷贝
	return start;//返回目标地址
}
