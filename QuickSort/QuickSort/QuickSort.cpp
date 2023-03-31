#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void quick_sort(int arr[], int start, int end);
//void swap(int* num1, int* num2);
//int main()
//{
//	int arr[] = { 9, -16, 30, 23, -30, -49, 25, 21, 30 };
//	int sz = sizeof(arr) / sizeof(int);
//	printf("排序前：");
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	quick_sort(arr, 0, sz);
//	printf("排序后：");
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void quick_sort(int arr[], int start, int end)
//{
//	int left = start;
//	int right = end;
//	if(start < end)
//	{
//		while (1)
//		{
//			while (left < end && arr[++left] <= arr[start]);
//			while (right > start && arr[--right] >= arr[start]);
//			if (left < right)
//			{
//				//交换两数的值
//				swap(&arr[left], &arr[right]);
//			}
//			else
//			{
//				break;
//			}
//		}
//		swap(&arr[start], &arr[right]);
//		quick_sort(arr, start, right);
//		quick_sort(arr, right + 1, end);
//	}
//}
//void swap(int* num1, int* num2)
//{
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
#include <stdio.h>
void quickSort(int* arr, int start, int end);
void swap(int* num1, int* num2);
int main()
{
	int arr[] = { 9, -16, 30, 23, -30, -49, 25, 21, 30 };
	int sz = sizeof(arr) / sizeof(int);
	printf("排序前：");
	for (int i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	quickSort(arr, 0, sz);
	printf("排序后：");
	for (int i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
void quickSort(int* arr, int start, int end)
{
	//递归条件
	if (start < end)
	{
		int left = start;
		int right = end;
		while (1)
		{
			//找到一个大于第一个数的索引
			while (left < end && arr[++left] <= arr[start]);
			//找到一个小于第一个数的索引
			while (right > start && arr[--right] >= arr[start]);
			if (left < right)
			{
				//交换两个数的值
				swap(&arr[left], &arr[right]);
			}
			else
			{
				break;
			}
		}
		swap(&arr[start], &arr[right]);
		quickSort(arr, start, right);
		quickSort(arr, left, end);
	}
}
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}