#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void csh(char br[ROWS][COLS], int rows, int cols,int set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
		       br[i][j] = set;
		}
	}
}
void dayin(char br[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j<=col; j++)
		{
			printf("%c ", br[i][j]);
		}
		printf("\n");
	}
}
void buzhilie(char br[ROWS][COLS], int row, int col)
{
	int cs = counts;
	while (cs)
	{
		int x = rand() % row + 1;
	    int y = rand() % col + 1;
		if (br[x][y] == '0')
		{
			br[x][y] = '1';
			cs--;
		}
	}
}
int cazhaolie(char lie[ROWS][COLS], int x, int y)
{
	return lie[x - 1][y] +
		lie[x - 1][y - 1] +
		lie[x][y - 1] +
		lie[x + 1][y - 1] +
		lie[x + 1][y] +
		lie[x + 1][y + 1] +
		lie[x][y + 1] +
		lie[x - 1][y + 1] - 8 * '0';
}
void findlie(char lie[ROW][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- counts)
	{
		printf("请输入排查的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (lie[x][y] == '1')
			{
				printf("游戏给苏，game over\n");
				dayin(lie, ROW, COL);
				break;
			}
			else
			{
				int cout = cazhaolie(lie, x, y);
				show[x][y] = cout + '0';
				dayin(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入非法重新输入！\n");
		}
	}
	if (win == row * col - counts)
	{
		printf("恭喜获得爆破大师的称号\n");
		dayin(lie, ROW, COL);
	}
}

