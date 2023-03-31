#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void quick_sort(int arr[], int start, int end);
//void swap(int* num1, int* num2);
//int main()
//{
//	int arr[] = { 9, -16, 30, 23, -30, -49, 25, 21, 30 };
//	int sz = sizeof(arr) / sizeof(int);
//	printf("����ǰ��");
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	quick_sort(arr, 0, sz);
//	printf("�����");
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
//				//����������ֵ
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
	printf("����ǰ��");
	for (int i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	quickSort(arr, 0, sz);
	printf("�����");
	for (int i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
void quickSort(int* arr, int start, int end)
{
	//�ݹ�����
	if (start < end)
	{
		int left = start;
		int right = end;
		while (1)
		{
			//�ҵ�һ�����ڵ�һ����������
			while (left < end && arr[++left] <= arr[start]);
			//�ҵ�һ��С�ڵ�һ����������
			while (right > start && arr[--right] >= arr[start]);
			if (left < right)
			{
				//������������ֵ
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