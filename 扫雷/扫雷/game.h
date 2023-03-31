#pragma once
//引用头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//定义符号常量
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_SET 10
//函数声明
//棋盘初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//设置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//排查雷
//1.输入坐标
//2.判断坐标所在处是不是雷
//(1)是雷 - bong 你被炸死了
//(2)不是雷 - 坐标所在处周围有多少雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], char check[ROWS][COLS], int row, int col);
//排查坐标周围有多少雷
int GetMine(char mine[ROWS][COLS], int x, int y);