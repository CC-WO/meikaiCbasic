//2�̎����l����������i�ԈႦ�j
//�^�錾�G���[���o�܂��B

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

	puts("2�̎�������͂��Ă��������B");
	printf("����A:");	scanf_s("%f", &dx);
	printf("����B:");	scanf_s("%f", &dy);

	swap(&dx, &dy);

	puts("�����̒l���������܂����B");
	printf("����A��%f�ł��B\n", dx);
	printf("����B��%f�ł��B\n", dy);

	return(0);
}