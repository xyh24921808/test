#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define counts 10

void csh(char br[ROWS][COLS],int rows ,int cols,int set);
void dayin(char br[ROWS][COLS], int row, int col);
void buzhilie(char br[ROWS][COLS], int row, int col);
void findlie(char lie[ROW][COLS], char show[ROWS][COLS], int row, int col);
int cazhaolie(char lie[ROWS][COLS], int x, int y);
