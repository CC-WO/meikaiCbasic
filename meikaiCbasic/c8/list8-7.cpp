//最大公約数を求める

#include <stdio.h>

int gcdf(int vx, int vy)
{
	return(vy == 0 ? vx : gcdf(vy, vx % vy));
}

int gcd(int va, int vb)
{
	return(va > vb ? gcdf(va, vb) : gcdf(vb, va));
}

int main(void)
{
	int n1, n2;

	puts("2つの整数を入力してください。");
	printf("整数1:");	scanf_s("%d", &n1);
	printf("整数2:");	scanf_s("%d", &n2);

	printf("最大公約数は%dです。\n", gcd(n1, n2));

	return(0);
}