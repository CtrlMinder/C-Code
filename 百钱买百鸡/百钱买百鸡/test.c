#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//��Ǯ��ټ���ĸ��5Ǯ������3Ǯ��С��0.5Ǯ
int main()
{
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	while ((scanf("%d", &x)) != EOF)
	{
		for (a = 1; a < x/5; a++)//ĸ��
		{
			for (b = 1; b < x/3; b++)//����
			{
				for (c = 1; c < x / 0.5; c++)//С��
				{
					if ((a + b + c == x) && (5 * a + 3 * b + 0.5 * c == x))//��������
					{
						printf("%d %d %d\n", a, b, c);//��ӡĸ�� ���� С��������ֻ
					}
				}
			}
		}
	}
	return 0;
}