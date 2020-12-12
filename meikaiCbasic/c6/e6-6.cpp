//画面に「こんにちは。」と表示して改行を行う関数を作成せよ

#include <stdio.h>

void hello(void)
{
	printf("こんにちは。");
	putchar('\n');
}

int main(void)
{
	hello();

	return(0);
}