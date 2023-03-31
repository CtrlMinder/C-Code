#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int m = 10;
//    int n = 20;
//    //交换前两数的值
//    printf("交换前:m = %d, n = %d\n", m, n);
//    //交换
//    int temp = m;
//    m = n;
//    n = temp;
//    //交换后两数的值
//    printf("交换后:m = %d, n = %d\n", m, n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int m = 10;
//    int n = 20;
//    //交换前两数的值
//    printf("交换前:m = %d, n = %d\n", m, n);
//    //交换
//    m = m + n;
//    n = m - n;
//    m = m - n;
//    //交换后两数的值
//    printf("交换后:m = %d, n = %d\n", m, n);
//    return 0;
//}
#include <stdio.h>
int main()
{
    int m = 10;
    int n = 20;
    //交换前两数的值
    printf("交换前:m = %d, n = %d\n", m, n);
    //交换
    m = m ^ n;
    n = m ^ n;
    m = m ^ n;
    //交换后两数的值
    printf("交换后:m = %d, n = %d\n", m, n);
    return 0;
}