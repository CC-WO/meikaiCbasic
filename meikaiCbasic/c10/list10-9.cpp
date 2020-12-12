//2つの実数値を交換する（間違え）
//型宣言エラーが出ます。

#include <stdio.h>

void swap(int *nx, int *ny)
{
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}

int main(void)
{
	double dx, dy;

	puts("2つの実数を入力してください。");
	printf("実数A:");	scanf_s("%f", &dx);
	printf("実数B:");	scanf_s("%f", &dy);

	swap(&dx, &dy);

	puts("これれの値を交換しました。");
	printf("実数Aは%fです。\n", dx);
	printf("実数Bは%fです。\n", dy);

	return(0);
}