// Student ID: B10615043
// Date: April 6, 2019
// Last Update: April 7, 2019
// Problem statement: This C program to solve Longest palindrome subsequence problem.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 儲存原字串
char str[1000 + 1];
// 儲存迴文長度表格
int len[1000][1000];
// 儲存迴文輸出點
int rec[1000][1000];

int palindromeLength(int i, int j);
void palindromePrint(int i, int j);
int main()
{
	int N;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		gets(str);
		// 將長度表格初始化為-1
		memset(len, -1, sizeof(len));
		int length = strlen(str);
		printf("%d\n", palindromeLength(0, length - 1));
		palindromePrint(0, length - 1);
		printf("\n");
		//getchar();
	}
	return 0;
}

int palindromeLength(int i, int j)
{
	// 同位置回傳1
	if (i == j) 
		return 1;
	// 顛倒不計算
	if (i > j) 
		return 0;
	// 值已經計算過
	if (len[i][j] != -1) 
		return len[i][j];

	// 兩端相等
	if (str[i] == str[j])
	{
		len[i][j] = palindromeLength(i + 1, j - 1) + 2;
		rec[i][j] = 0;
	}
	// 兩端不相等
	else
	{
		int left = palindromeLength(i + 1, j);
		int right = palindromeLength(i, j - 1);

		// 紀錄刪左端
		if (left > right)
		{
			len[i][j] = left;
			rec[i][j] = 1;
		}

		// 紀錄刪右端
		else
		{
			len[i][j] = right;
			rec[i][j] = 2;
		}
	}
	return len[i][j];
}

void palindromePrint(int i, int j)
{
	// 顛倒時遞迴結束
	if (i > j) return;

	// 長度為奇數時中間的字母。
	if (i == j)
	{
		printf("%c", str[i]);
	}
	// 字母一樣時輸出
	else if (rec[i][j] == 0)
	{
		printf("%c", str[i]);
		palindromePrint(i + 1, j - 1);
		printf("%c", str[i]);
	}
	// 不輸出左端
	else if (rec[i][j] == 1)
	{
		palindromePrint(i + 1, j);
	}
	// 不輸出右端
	else
	{
		palindromePrint(i, j - 1);
	}
}