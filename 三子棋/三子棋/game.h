#pragma once
//����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//������ų���
#define ROW 5
#define COL 5
//��������
//���̳�ʼ��
void InitBoard(char board[ROW][COL],int row,int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//���1��
void Player1Move(char board[ROW][COL], int row, int col);
void Player2Move(char board[ROW][COL], int row, int col);
//������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
//���Ӯ - ���ء�*��
//����Ӯ - ���ء�#��
//ƽ�� - ���ء�Q��
//���� - ���ء�C��
char IsWin(char board[ROW][COL], int row, int col);
//�ж�ƽ��
int IsFull(char board[ROW][COL], int row, int col);
