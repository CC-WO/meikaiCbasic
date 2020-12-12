//2つの整数値を昇順に並べる

#include <stdio.h>

void swap(int *nx, int*ny)
{
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}

void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}

int main(void)
{
	int na, nb;

	puts("2つの整数を入力してください。");
	printf("整数A:");	scanf_s("%d", &na);
	printf("整数B:");	scanf_s("%d", &nb);

	sort2(&na, &nb);

	puts("これらの値を昇順に並べました。");
	printf("整数Aは%dです。\n", na);
	printf("整数Bは%dです。\n", nb);

	return(0);
}