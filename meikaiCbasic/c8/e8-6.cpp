//�قȂ�n�̐�������r�̐�������肾���g�ݍ��킹nCr�����߂�֐����쐬����

#include <stdio.h>

int fact(int n)
{
	int sum = 1;

	for (; n > 0; n--)
		sum *= n;

	return(sum);
}

int combination(int n, int r)
{
	int sum = 1;

	sum = fact(n) / fact(r);

	return(sum);
}

int main(void)
{
	int na, nb;

	printf("2�̐�������͂��Ă��������B\n");
	printf("����n:");	scanf_s("%d", &na);
	printf("����r:");	scanf_s("%d", &nb);

	printf("nCr:%d\n", combination(na, nb));
	
	return(0);

}