#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void mystr(char*dest, char*chushi)
{
	assert(dest != NULL);
	assert(chushi != NULL);
	while (*dest++=*chushi++)
	{
		;
	}

}
int main()
{
	char arr1[] = "###################";
	char arr2[] = "bit";
	mystr(arr1,arr2);
	printf("%s", arr1);
	return 0;
}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}