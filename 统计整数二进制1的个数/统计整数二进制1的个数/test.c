#define _CRT_SECURE_NO_WARNINGS 1
//统计一个整数储存在内存中的二进制序列有几个1
#include <stdio.h>
int number_of1(unsigned int );//函数声明
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = number_of1(num);//函数调用
	printf("ret = %d\n", ret);
	return 0;
}
//int number_of1(int num)//版本1.0 - 不完善版本
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}
//int number_of1(unsigned int num)//版本1.1 - 进制转换版本 - 完善版本
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}
//int number_of1(int num)//版本2.0 - 按位与1版本
//{
//	int count = 0;
//	while (num)//迭代
//	{
//		if (num & 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}
int number_of1(unsigned int num)//版本2.1 - 按位与1版本
{
	int count = 0;
	while (num)//迭代
	{
		if (num & 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}
//int number_of1(int num)//版本3 - 按位与(num-1)版本
//{
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = (num & (num - 1));
//	}
//	return count;
//}