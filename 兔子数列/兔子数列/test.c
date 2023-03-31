#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib(int );//函数声明
int main()
{
	int n = 0;//第n个斐波那契数
	scanf("%d", &n);
	int ret = Fib(n);//调用函数
	printf("ret = %d", ret);//打印结果
	return 0;
}
int Fib(int n)//版本1 - 递归版本
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return (Fib(n - 1) + Fib(n - 2));
	}
}
//int Fib(int n)//版本2 - 非递归版本
//{
//	int fib1 = 1;//F(1) = 1
//	int fib2 = 1;//F(2) = 1
//	int i = 0;
//	for (i = 2; i < n; i++)//采用循环的方式
//	{
//		int temp = fib2;//借用中间变量记录fib2的值
//		fib2 = fib1 + fib2;
//		fib1 = temp;
//	}
//	return fib2;
//}