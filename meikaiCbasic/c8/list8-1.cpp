//整数の二乗と浮動少数点数の二乗（関数）

#include <stdio.h>

int sqr_int(int x)
{
	return(x * x);
}

double sqr_double(double x)
{
	return(x * x);
}

int main(void)
{
	int nx;
	double dx;

	printf("整数を入力してください:");
	scanf_s("%d", &nx);
	printf("その値の二乗は:%d\n", sqr_int(nx));

	printf("実数を入力してください:");
	scanf_s("%lf", &dx);
	printf("その値の二乗は:%f\n", sqr_double(dx));

	return(0);
}