#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int m = 10;
//    int n = 20;
//    //����ǰ������ֵ
//    printf("����ǰ:m = %d, n = %d\n", m, n);
//    //����
//    int temp = m;
//    m = n;
//    n = temp;
//    //������������ֵ
//    printf("������:m = %d, n = %d\n", m, n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int m = 10;
//    int n = 20;
//    //����ǰ������ֵ
//    printf("����ǰ:m = %d, n = %d\n", m, n);
//    //����
//    m = m + n;
//    n = m - n;
//    m = m - n;
//    //������������ֵ
//    printf("������:m = %d, n = %d\n", m, n);
//    return 0;
//}
#include <stdio.h>
int main()
{
    int m = 10;
    int n = 20;
    //����ǰ������ֵ
    printf("����ǰ:m = %d, n = %d\n", m, n);
    //����
    m = m ^ n;
    n = m ^ n;
    m = m ^ n;
    //������������ֵ
    printf("������:m = %d, n = %d\n", m, n);
    return 0;
}