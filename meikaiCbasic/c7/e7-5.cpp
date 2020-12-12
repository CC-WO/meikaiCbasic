//符号無し整数に対する算術演算が、オーバーフローを起こさないことを確認するプログラムを作成せよ

#include <stdio.h>

int main(void)
{
	unsigned x = 60000;
	unsigned y = 7000;
	unsigned z;

	z = x + y;

	printf("%u\n", z);

	return(0);
}