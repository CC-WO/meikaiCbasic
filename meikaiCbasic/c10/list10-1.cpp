//2�̐����̘a�ƍ������߂�i�ԈႢ�j

#include <stdio.h>

void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("2�̐�������͂��Ă��������B");
	printf("����A:");		scanf_s("%d", &na);
	printf("����B:");		scanf_s("%d", &nb);

	sum_diff(na, nb, wa, sa);

	printf("�a��%d�ł��B\n����%d�ł��B\n", wa, sa);

	return(0);
}