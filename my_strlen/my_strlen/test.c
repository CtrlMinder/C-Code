#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>//assert需要引用的头文件
#define N 10000//定义符号常量
size_t my_strlen(const char*);//my_strlen函数声明
int main()//函数环境
{
	char ch[N] = { 0 };
	gets(ch);//读取字符串
	unsigned len = my_strlen(ch);//函数调用
	printf("%u\n", len);//打印字符串长度
	return 0;
}
//size_t  my_strlen(const char* str)//版本1 - 指针-指针版本
//{
//	assert(str != NULL);//断言 - 避免str为空指针
//	const char* str1 = str;//记录字符串首地址
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - str1;
//}
//size_t  my_strlen(const char* str)//版本2 - 计数器版本
//{
//	assert(str != NULL);//断言
//	unsigned count = 0;//计数器初始化
//	for (count = 0; *str++ != '\0'; count++);
//	return count;
//}
size_t  my_strlen(const char* str)//版本3 - 递归版本
{
	assert(str != NULL);//断言
	if (*str != '\0')
	{
		return (1 + my_strlen(str + 1));//递归调用
	}
	return 0;
}