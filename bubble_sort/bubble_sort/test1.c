#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
int main()
{
	//test_int();
	//test_double();
	//test_char();
	test_struct();
	return 0;
}
void test_int()//�������ͻ���
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
	print_int(arr, sz);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_int(arr, sz);
}
void test_double()//�����Ͳ��Ի���
{
	double arr[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0,0.0 };
	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
	print_double(arr, sz);//����ǰ��ӡ
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_double);//���ú�������
	print_double(arr, sz);//������ӡ
}
void test_char()//�ַ��Ͳ��Ի���
{
	char ch[] = { 'd','e','a','k','h','g','t','b' };
	unsigned int sz = sizeof(ch) / sizeof(ch[0]);
	print_char(ch, sz);//����ǰ��ӡ
	bubble_sort(ch, sz, sizeof(ch[0]), cmp_char);//���ú���
	print_char(ch, sz);//������ӡ
}
void test_struct()//�ṹ�����Ͳ��Ի���
{
	struct Stu stu[] = { {"zhangsan",38},{"qiansi",45},{"wangwu",30} };
	unsigned int sz = sizeof(stu) / sizeof(stu[0]);
	print_struct(stu, sz);//����ǰ��ӡ
	//bubble_sort(stu, sz, sizeof(stu[0]), cmp_struct_name_strlen);//�������ֳ�������
	//print_struct(stu, sz);//���ֳ���������ӡ
	bubble_sort(stu, sz, sizeof(stu[0]), cmp_struct_name_strcmp);//������������ĸ����
	print_struct(stu, sz);//��������ĸ������ӡ
	//bubble_sort(stu, sz, sizeof(stu[0]), cmp_struct_age);//������������
	//print_struct(stu, sz);//����������ӡ
}
