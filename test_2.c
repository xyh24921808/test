#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int n = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j <n-i-1 ; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	int k = 0;
	for (k = 0; k < n; k++)
	{
		printf("%d ", arr[k]);
	}
}
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j<=i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}