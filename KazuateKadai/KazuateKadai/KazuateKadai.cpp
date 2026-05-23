#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"input.h"
#include"judge.h"
int main()
{
	// 初期化
	int t = (int)time(nullptr);

	bool gameClear = false;

	while (!gameClear)
	{

		int num = getRandom(t);

		int input = numInput();

		gameClear = comparison(num, input);


	}
	return 0;
}