#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Sort(int, int);//冒泡排序 - 升序
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int n = 0;
	scanf("%d", &n);//输入n，表示数组中有n个数
	for (i = 0; i < n; i++)//输入n个数
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");
	Sort(arr, n);
	for (i = 0; i < n; i++)//输出排序后的数
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
void Sort(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}