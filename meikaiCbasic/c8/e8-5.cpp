//整数nの階乗を返す関数を再起を用いずに定義せよ

#include <stdio.h>

int fact(int n)
{
	int sum = 1;

	for (; n > 0; n--)
		sum *= n;

	return(sum);
}

int main(void)
{
	int na;

	printf("整数を入力してください:");
	scanf_s("%d",&na);

	printf("階乗は%d\n", fact(na));

	return(0);

}