//2つ整数値を交換する（C＋＋による参照渡し）

#include <stdio.h>

void swap(int& nx, int& ny)
{
	int temp = nx;
	nx = ny;
	ny = temp;
}

int main(void)
{
	int na, nb;

	puts("2つの整数を入力してください。");
	printf("整数A:");	scanf_s("%d", &na);
	printf("整数B:");	scanf_s("%d", &nb);

	swap(na, nb);

	puts("これらの値を交換しました。");
	printf("整数A:%d\n", na);
	printf("整数B:%d\n", nb);

	return(0);
}