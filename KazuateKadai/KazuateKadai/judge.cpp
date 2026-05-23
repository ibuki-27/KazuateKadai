#include<stdio.h>

// ランダム数と入力数を比較する
bool comparison(int num, int input)
{
	bool gameClear = false;

	if (num == input)
	{
		printf("一致！\n");
		gameClear = true;
	}
	else if (num < input)
	{
		printf("大きい！\n");
	}
	else if (num > input)
	{
		printf("小さい！\n");
	}

	if (!gameClear)
	{
		printf("もう一度！\n\n");
	}
	else
	{
		printf("ゲームクリア！\n");
	}

	return gameClear;
}