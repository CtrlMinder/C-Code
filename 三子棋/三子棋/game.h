#pragma once
//引用头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//定义符号常量
#define ROW 5
#define COL 5
//函数声明
//棋盘初始化
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家1走
void Player1Move(char board[ROW][COL], int row, int col);
void Player2Move(char board[ROW][COL], int row, int col);
//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
//玩家赢 - 返回‘*’
//电脑赢 - 返回‘#’
//平局 - 返回‘Q’
//继续 - 返回‘C’
char IsWin(char board[ROW][COL], int row, int col);
//判断平局
int IsFull(char board[ROW][COL], int row, int col);
