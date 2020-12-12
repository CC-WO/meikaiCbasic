//整数のにじょうと浮動少数点数の二乗（関数形式マクロ）

#include <stdio.h>

#define sqr(x) ((x)*(x))

int main(void)
{
	int nx;
	double dx;

	printf("整数を入力してください:");
	scanf_s("%d", &nx);
	printf("その数の二乗は%dです。\n", sqr(nx));

	printf("実数を入力してください:");
	scanf_s("%lf", &dx);
	printf("その数の二乗は%fです。\n", sqr(dx));

	return(0);
}