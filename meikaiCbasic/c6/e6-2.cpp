//三つのint型整数の最小値を返す関数を作成せよ

#include <stdio.h>

int minof(int ta, int tb, int tc)
{
	int x, y;

	x = (ta < tb) ? ta : tb;
	y = (tc < x) ? tc : x;

	return(y);

}

int main(void)
{
	int a, b, c;

	printf("整数1:");	scanf_s("%d", &a);
	printf("整数2:");	scanf_s("%d", &b);
	printf("整数3:");	scanf_s("%d", &c);

	printf("最小値は:%d\n", minof(a, b, c));



}