//2�̐����̓��̍������߂�

#include <stdio.h>

int sqr(int x)
{
	return(x * x);
}

int diff(int x, int y)
{
	return((x > y) ? x-y : y-x );
}

int main(void)
{
	int kx, ky, kx2, ky2;

	puts("2�̐�������͂��Ă��������B");
	printf("����kx:");	scanf_s("%d", &kx);
	printf("����ky:");	scanf_s("%d", &ky);

	kx2 = sqr(kx);
	ky2 = sqr(ky);
	printf("kx�̓���ky�̓��̍���%d�ł��B\n", diff(kx2, ky2));

	return(0);
}