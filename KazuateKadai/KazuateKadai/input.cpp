#include<stdio.h>

int getRandom(int t)
{
	// 0～9の中から数値を一つランダムに抽選する
	int num = t % 10;

	return num;
}

int numInput()
{
	// 数値を入力
	int input;

	scanf_s("%d", &input);

	return input;
}