//2�̐����l����������

#include <stdio.h>

void swap(int *nx, int *ny)
{
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}

int main(void)
{
	int na, nb;

	puts("2�̐�������͂��Ă��������B");
	printf("����A:");	scanf_s("%d", &na);
	printf("����B:");	scanf_s("%d", &nb);

	swap(&na, &nb);

	puts("�����̒l���������܂����B");
	printf("����A��%d�ł��B\n", na);
	printf("����B��%d�ł��B\n", nb);

	return(0);
}