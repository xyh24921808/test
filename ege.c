#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main(void)
//{
//	int a1[] = { 1,2,3,4,5 };
//	int a2[] = { 2,3,4,5,6 };
//	int a3[] = { 3,4,5,6,7 };
//	int* pr[] = { a1,a2,a3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(pr[i]) + j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	double a = 1.111111;
//	int n = 1;
//	printf("%lf", a);
//	return 0;
//}#include <stdio.h>
#include <stdio.h>

//int main()
//{
//    //声明两个整型变量，用于存储输入的两个整数
//    int a = 0;
//    int b = 0;
//    //请在Begin-End之间添加你的代码，按要求格式输出四则运算式子
//    /********** Begin *********/
//
//    scanf("%d %d", &a, &b);
//    printf("%5d + %-5d = %11d\n", a, b, a + b);
//    printf("%5d - %-5d = %11d\n", a, b, a - b);
//    printf("%5d * %-5d = %11d\n", a, b, a * b);
//    printf("%5d / %-5d = %11d\n", a, b, a / b);
//    /********** End **********/
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 1; j < n+1; j++)
//        {
//            if (arr[i]==arr[j+i])
//            {
//                arr[j+i] = 0;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int n = 15;
//	long long i = 1;
//	long long sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<stdio.h>
int main(void)
{
    int n = 1000;
    int i = 1;
    int j = 0;
    int cn = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 7 == 0 || i % 11 == 0)
        {
            printf("%-4d ", i);
            cn++;
            if (cn == 8)
            {
                printf("\n");
                cn = 0;
            }
        }
    }
    return 0;
}



