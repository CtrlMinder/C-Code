#define _CRT_SECURE_NO_WARNINGS 1
//ͳ��һ�������������ڴ��еĶ����������м���1
#include <stdio.h>
int number_of1(unsigned int );//��������
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = number_of1(num);//��������
	printf("ret = %d\n", ret);
	return 0;
}
//int number_of1(int num)//�汾1.0 - �����ư汾
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
//int number_of1(unsigned int num)//�汾1.1 - ����ת���汾 - ���ư汾
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
//int number_of1(int num)//�汾2.0 - ��λ��1�汾
//{
//	int count = 0;
//	while (num)//����
//	{
//		if (num & 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}
int number_of1(unsigned int num)//�汾2.1 - ��λ��1�汾
{
	int count = 0;
	while (num)//����
	{
		if (num & 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}
//int number_of1(int num)//�汾3 - ��λ��(num-1)�汾
//{
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = (num & (num - 1));
//	}
//	return count;
//}