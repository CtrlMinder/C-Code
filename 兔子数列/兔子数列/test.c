#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib(int );//��������
int main()
{
	int n = 0;//��n��쳲�������
	scanf("%d", &n);
	int ret = Fib(n);//���ú���
	printf("ret = %d", ret);//��ӡ���
	return 0;
}
int Fib(int n)//�汾1 - �ݹ�汾
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
//int Fib(int n)//�汾2 - �ǵݹ�汾
//{
//	int fib1 = 1;//F(1) = 1
//	int fib2 = 1;//F(2) = 1
//	int i = 0;
//	for (i = 2; i < n; i++)//����ѭ���ķ�ʽ
//	{
//		int temp = fib2;//�����м������¼fib2��ֵ
//		fib2 = fib1 + fib2;
//		fib1 = temp;
//	}
//	return fib2;
//}