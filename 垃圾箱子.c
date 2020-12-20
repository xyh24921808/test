#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//5.小人
//1.墙壁
//0.空地方
//3.箱子
//4.目的地
//箱子+目的地重合.7
//小人+目的地.9
int map[8][8] =
{
	1,1,1,1,1,1,1,1,
	1,1,1,4,1,0,4,1,
	1,0,1,3,0,3,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,5,0,1,1,1,
	1,1,3,0,0,3,4,1,
	1,4,0,0,1,1,1,1,
	1,1,1,1,1,1,1,1
};
void show()
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			switch (map[i][j])
			{
			case 0:
				printf("   ");
				break;
			case 1:
				printf("|||");
				break;
			case 3:
				printf("|#|");
				break;
			case 4:
				printf("|X|");
				break;
			case 5:
			case 9:
				printf("QWQ");
				break;
			case 7:
				printf("_!_");
				break;
			default:
				break;
			}
		}
		printf("\n");
	}
}
void playgame()
{
	int i, j;
	for ( i = 0; i < 8; i++)
	{
		for ( j = 0; j < 8; j++)
		{
			if (map[i][j] == 5 || map[i][j] == 9)
				break;
		}
		if (map[i][j] == 5 || map[i][j] == 9)
				break;
	}
	char ch = 0;
	ch = _getch();
	switch (ch)
	{
	case 'W':
	case 'w':
	case 72:
		if (map[i-1][j]==0||map[i-1][j]==4)
		{
			map[i][j] -= 5;
			map[i - 1][j] += 5;
		}
		if (map[i - 1][j] == 3 || map[i - 1][j] == 7)
		{
			if (map[i - 2][j] == 0 || map[i - 2][j] == 4)
			{
				map[i][j] -= 5;
				map[i - 1][j] += 2;
				map[i - 2][j] += 3;
			}
		}
		break;
	case 'A':
	case 'a':
	case 75:
		if (map[i][j-1] == 0 || map[i ][j-1] == 4)
		{
			map[i][j] -= 5;
			map[i ][j- 1] += 5;
		}
		if (map[i ][j- 1] == 3 || map[i ][j- 1] == 7)
		{
			if (map[i ][j- 2] == 0 || map[i ][j- 2] == 4)
			{
				map[i][j] -= 5;
				map[i ][j- 1] += 2;
				map[i ][j- 2] += 3;
			}
		}
		break;
	case 'D':
	case 'd':
	case 77:
		if (map[i][j+1] == 0 || map[i ][j+1] == 4)
		{
			map[i][j] -= 5;
			map[i][j+1] += 5;
		}
		if (map[i][j + 1] == 3 || map[i][j + 1] == 7)
		{
			if (map[i][j + 2] == 0 || map[i][j + 2] == 4)
			{
				map[i][j] -= 5;
				map[i][j + 1] += 2;
				map[i][j + 2] += 3;
			}
		}
		break;
	case 'S':
	case 's':
	case 80:
		if (map[i+1][j] == 0 || map[i+1][j] == 4)
		{
			map[i][j] -= 5;
			map[i+1][j] += 5;
		}
		if (map[i + 1][j] == 3 || map[i + 1][j] == 7)
		{
			if (map[i + 2][j] == 0 || map[i + 2][j] == 4)
			{
				map[i][j] -= 5;
				map[i + 1][j] += 2;
				map[i + 2][j] += 3;
			}
		}
		break;
	default:
		break;
	}
	
}
int main(void)
{
	while (1)
	{
		show();
		playgame();
		system("cls");
	}
	return 0;
}