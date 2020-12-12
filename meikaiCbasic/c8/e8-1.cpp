//２つの値xとyの差を返す関数形式マクロを定義せよ

#include <stdio.h>

#define diff(x,y)	(x - y)

int main(void)
{
	int x = 5;
	int y = 3;

	printf("x-y=%d\n", diff(x, y));

	return(0);
}

