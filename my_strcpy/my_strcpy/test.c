#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>//assert���õ�ͷ�ļ�
char* my_strcpy(char*, const char*);//�������� - ģ��ʵ��strcpy�⺯��
int main()//���������Ĵ���
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	scanf("%s %s", arr1, arr2);//��ȡ�����ַ���
	my_strcpy(arr1, arr2);//��������
	printf("%s\n", arr1);//��ӡarr1
	return 0;
}
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//����
	assert(src != NULL);
	char* start = dest;//��¼Ŀ���ַ
	while (*dest++ = *src++);//ʵ���ַ����Ŀ���
	return start;//����Ŀ���ַ
}
