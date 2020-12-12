//異なるn個の整数からr個の整数を取りだす組み合わせnCrを求める関数を作成せよ

#include <stdio.h>

int fact(int n)
{
	int sum = 1;

	for (; n > 0; n--)
		sum *= n;

	return(sum);
}

int combination(int n, int r)
{
	int sum = 1;

	sum = fact(n) / fact(r);

	return(sum);
}

int main(void)
{
	int na, nb;

	printf("2つの整数を入力してください。\n");
	printf("整数n:");	scanf_s("%d", &na);
	printf("整数r:");	scanf_s("%d", &nb);

	printf("nCr:%d\n", combination(na, nb));
	
	return(0);

}