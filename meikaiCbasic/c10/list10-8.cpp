//2�̐����l�������ɕ��ׂ�

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

	puts("2�̐�������͂��Ă��������B");
	printf("����A:");	scanf_s("%d", &na);
	printf("����B:");	scanf_s("%d", &nb);

	sort2(&na, &nb);

	puts("�����̒l�������ɕ��ׂ܂����B");
	printf("����A��%d�ł��B\n", na);
	printf("����B��%d�ł��B\n", nb);

	return(0);
}