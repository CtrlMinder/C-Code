#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* elem1, const void* elem2))//ð������ģ��ʵ�ֿ⺯��qsort
{
	unsigned int i = 0;//����
	for (i = 0; i < num - 1; i++)
	{
		//����һ��
		unsigned int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//���ñȽϺ���
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//��������Ԫ��
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void swap(char* buf1, char* buf2, size_t width)//��������Ԫ��
{
	//������1.����������Ԫ�ص��׵�ַ 2.Ԫ��ռ�ڴ�ռ��С����λ���ֽ�
	//�����㷨������ÿ���ֽڵ�����
	unsigned int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;//�м����
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
int cmp_double(const void* elem1, const void* elem2)//�Ƚ����������ʹ�С
{
	return (int)(*(double*)elem1 - *(double*)elem2);//��������Ԫ�صĲ�ֵ
}
void print_double(double arr[], unsigned int sz)//��ӡ����������
{
	unsigned int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
}
int cmp_char(const void* elem1, const void* elem2)//�Ƚ��ַ���С
{
	return *(char*)elem1 - *(char*)elem2;
}
void print_char(char ch[], unsigned int sz)//��ӡ�ַ�����
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