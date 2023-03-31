#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* elem1, const void* elem2))//冒泡排序模拟实现库函数qsort
{
	unsigned int i = 0;//趟数
	for (i = 0; i < num - 1; i++)
	{
		//排序一趟
		unsigned int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//调用比较函数
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换两个元素
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void swap(char* buf1, char* buf2, size_t width)//交换两个元素
{
	//参数：1.两个待交换元素的首地址 2.元素占内存空间大小，单位是字节
	//基本算法：交换每个字节的数据
	unsigned int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;//中间变量
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
int cmp_int(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}
void print_int(int arr[], unsigned int sz)
{
	unsigned int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_double(const void* elem1, const void* elem2)//比较两个浮点型大小
{
	return (int)(*(double*)elem1 - *(double*)elem2);//返回两个元素的差值
}
void print_double(double arr[], unsigned int sz)//打印浮点型数组
{
	unsigned int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}
int cmp_char(const void* elem1, const void* elem2)//比较字符大小
{
	return *(char*)elem1 - *(char*)elem2;
}
void print_char(char ch[], unsigned int sz)//打印字符数组
{
	unsigned int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", ch[i]);
	}
	printf("\n");
}
int cmp_struct_name_strlen(const void* elem1, const void* elem2)
{
	return (strlen(((struct Stu*)elem1)->name) - strlen(((struct Stu*)elem2)->name));
}
int cmp_struct_name_strcmp(const void* elem1, const void* elem2)
{
	return strcmp(((struct Stu*)elem1)->name, ((struct Stu*)elem2)->name);
}
int cmp_struct_age(const void* elem1, const void* elem2)
{
	return (*(int*)elem1 - *(int*)elem2);
}
void print_struct(struct Stu stu[], unsigned int sz)
{
	unsigned int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d ", stu[i].name, stu[i].age);
	}
	printf("\n");
}