#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>//assert��Ҫ���õ�ͷ�ļ�
#define N 10000//������ų���
size_t my_strlen(const char*);//my_strlen��������
int main()//��������
{
	char ch[N] = { 0 };
	gets(ch);//��ȡ�ַ���
	unsigned len = my_strlen(ch);//��������
	printf("%u\n", len);//��ӡ�ַ�������
	return 0;
}
//size_t  my_strlen(const char* str)//�汾1 - ָ��-ָ��汾
//{
//	assert(str != NULL);//���� - ����strΪ��ָ��
//	const char* str1 = str;//��¼�ַ����׵�ַ
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - str1;
//}
//size_t  my_strlen(const char* str)//�汾2 - �������汾
//{
//	assert(str != NULL);//����
//	unsigned count = 0;//��������ʼ��
//	for (count = 0; *str++ != '\0'; count++);
//	return count;
//}
size_t  my_strlen(const char* str)//�汾3 - �ݹ�汾
{
	assert(str != NULL);//����
	if (*str != '\0')
	{
		return (1 + my_strlen(str + 1));//�ݹ����
	}
	return 0;
}