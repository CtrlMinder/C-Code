#pragma once
//����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//������ų���
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_SET 10
//��������
//���̳�ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col);
//�Ų���
//1.��������
//2.�ж��������ڴ��ǲ�����
//(1)���� - bong �㱻ը����
//(2)������ - �������ڴ���Χ�ж�����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], char check[ROWS][COLS], int row, int col);
//�Ų�������Χ�ж�����
int GetMine(char mine[ROWS][COLS], int x, int y);