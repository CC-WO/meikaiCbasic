//�ő���񐔂����߂�

#include <stdio.h>

int gcdf(int vx, int vy)
{
	return(vy == 0 ? vx : gcdf(vy, vx % vy));
}

int gcd(int va, int vb)
{
	return(va > vb ? gcdf(va, vb) : gcdf(vb, va));
}

int main(void)
{
	int n1, n2;

	puts("2�̐�������͂��Ă��������B");
	printf("����1:");	scanf_s("%d", &n1);
	printf("����2:");	scanf_s("%d", &n2);

	printf("�ő���񐔂�%d�ł��B\n", gcd(n1, n2));

	return(0);
}