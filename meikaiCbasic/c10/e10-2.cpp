//�O��int�^�����������ɕ��בւ���֐����쐬����B

#include <stdio.h>

int max3(int *n1, int *n2, int *n3)
{
	int max = 0;
	int min = 0;
	int mid = 0;

	max = (*n1 > *n2) ? *n1 : *n2;
	max = (max > *n3) ? max : *n3;

	min = (*n1 > *n2) ? *n2 : *n1;
	min = (min > *n3) ? *n3 : min;

}

void sort3(int *n1, int *n2, int *n3)
{
	if (*n3 < *n2 || *n3 < *n1 || *n2 < *n1)
		max3(n1, n2, n3);
}

int main(void)
{
	int na, nb, nc;

	printf("3�̐����l����͂��Ă��������B\n");
	printf("����A:");	scanf_s("%d", &na);
	printf("����B:");	scanf_s("%d", &nb);
	printf("����C:");	scanf_s("%d", &nc);

	sort3(&na, &nb, &nc);

	printf("�����ɕ��ׂ��\n%d\n%d\n%d\n");


	return(0);
}