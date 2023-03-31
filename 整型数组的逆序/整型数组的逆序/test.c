#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void scanf_s1(int[], int);
void reverse(int[], int);
void print(int[], int);
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	scanf("%d", &sz);
	scanf_s1(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}
void scanf_s1(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = temp;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}