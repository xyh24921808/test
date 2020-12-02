#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void muea()
{
	printf("**********************************\n");
	printf("*******1.play ********0.exit******\n");
	printf("**********************************\n");
}
void game()
{
	char lie[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	csh(lie, ROWS, COLS,'0');
	csh(show, ROWS, COLS, '*');
	buzhilie(lie, ROW, COL);
	dayin(show, ROW, COL);
	findlie(lie, show, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		muea();
		printf("«Î—°‘Ò£∫");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("¥ÌŒÛ÷ÿ ˆ\n");
			break;
		}
	} while (input);
}
int main(void)
{
	test();
	return 0;
}