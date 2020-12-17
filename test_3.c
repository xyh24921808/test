#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	int y = 0;
//	char b[80] = { 0 };
//	while (scanf("%s", &b) != EOF)
//	{
//		printf("%s\n", &b);
//		y++;
//	}
//	printf("%d", y);
//	return 0;
//}
//int main(void)
//{
//	int t[3] = { 0 };
//	while (scanf("%d%d%d", &t[0], &t[1], &t[2]) != EOF)
//	{
//		int max = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			if (t[i] > max)
//				max = t[i];
//		}
//		printf("%d", max);
//	}
//	return 0;
//}
//int main(void)
//{
//	char st[] = "aAoOEeUuIi";
//	char a;
//	while (scanf("%c", &a)!=EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (a == st[i])
//			{
//				printf("shi\n");
//				break;
//			}
//		}
//		getchar();
//		if (i == 10)
//			printf("no\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    float b[20] = { 0 };
    for (int i = 0; i < a; i++)
    {
        scanf("%f", &b[i]);
    }
    float amax = b[0];
    float bmax = b[0];
    for (int i = 0; i < a; i++)
    {
        if (amax < b[i])
            amax = b[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (bmax > b[i])
            bmax = b[i];
    }
    float sum = 0.0;
    for (int i = 0; i < a; i++)
    {
        sum += b[i];
    }
    printf("%.2f %.2f %.2f", amax, bmax, sum / 5);
}