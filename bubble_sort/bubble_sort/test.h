#pragma once
#include <stdio.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

void test_int();
int cmp_int(const void* elem1, const void* elem2);
void print_int(int arr[], unsigned sz);
void test_double();
int cmp_double(const void* elem1, const void* elem2);
void print_double(double arr[], unsigned int sz);
void test_char();
int cmp_char(const void* elem1, const void* elem2);
void print_char(char ch[], unsigned int sz);
void test_struct();
int cmp_struct_name_strlen(const void* elem1, const void* elem2);
int cmp_struct_name_strcmp(const void* elem1, const void* elem2);
int cmp_struct_age(const void* elem1, const void* elem2);
void print_struct(struct Stu stu[], unsigned int sz);
void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* elem1, const void* elem2));//冒泡排序模拟实现库函数qsort
void swap(char* buf1, char* buf2, size_t width);//交换两个元素
