#define _CRT_SECURE_NO_WARNINGS 1
//�ػ�����
//���г���ϵͳ����60���ػ������룺������ ��ȡ���ػ�
//shutdown -s -t 60   60���ػ�   -s���ùػ�   -t����ʱ��
//shutdown -a     ȡ���ػ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���60���ڹػ������룺����ɵ����ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "����ɵ��") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
