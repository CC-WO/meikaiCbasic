//int型の三乗値を返す関数を作成せよ

#include <stdio.h>

int cube(int x)
{
	int tc;

	tc = x * x * x;

	return(tc);
}

int main(void)
{
	int c;

	printf("整数:");	scanf_s("%d", &c);

	printf("三乗値:%d\n", cube(c));

	return(0);
	
}