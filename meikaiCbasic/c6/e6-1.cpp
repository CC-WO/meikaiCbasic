//二つのint整数型の小さいほうの値を返す関数を作成せよ

#include <stdio.h>

int minof(int ta, int tb)
{
	int x;

	x = (ta < tb) ? ta : tb;

	return(x);

}

int main(void)
{
	int a, b;

	printf("整数1:");	scanf_s("%d", &a);
	printf("整数2:");	scanf_s("%d", &b);

	printf("小さいほうは:%d\n", minof(a, b));

	return(0);

}