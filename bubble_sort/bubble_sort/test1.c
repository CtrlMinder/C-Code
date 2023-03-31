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
void test_int()//测试整型环境
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
	print_int(arr, sz);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_int(arr, sz);
}
void test_double()//浮点型测试环境
{
	double arr[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0,0.0 };
	unsigned int sz = sizeof(arr) / sizeof(arr[0]);
	print_double(arr, sz);//排序前打印
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_double);//调用函数排序
	print_double(arr, sz);//排序后打印
}
void test_char()//字符型测试环境
{
	char ch[] = { 'd','e','a','k','h','g','t','b' };
	unsigned int sz = sizeof(ch) / sizeof(ch[0]);
	print_char(ch, sz);//排序前打印
	bubble_sort(ch, sz, sizeof(ch[0]), cmp_char);//调用函数
	print_char(ch, sz);//排序后打印
}
void test_struct()//结构体类型测试环境
{
	struct Stu stu[] = { {"zhangsan",38},{"qiansi",45},{"wangwu",30} };
	unsigned int sz = sizeof(stu) / sizeof(stu[0]);
	print_struct(stu, sz);//排序前打印
	//bubble_sort(stu, sz, sizeof(stu[0]), cmp_struct_name_strlen);//根据名字长度排序
	//print_struct(stu, sz);//名字长度排序后打印
	bubble_sort(stu, sz, sizeof(stu[0]), cmp_struct_name_strcmp);//根据名字首字母排序
	print_struct(stu, sz);//名字首字母排序后打印
	//bubble_sort(stu, sz, sizeof(stu[0]), cmp_struct_age);//根据年龄排序
	//print_struct(stu, sz);//年龄排序后打印
}
