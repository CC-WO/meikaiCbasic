//�����̓��ƕ��������_���̓��i�֐��j

#include <stdio.h>

int sqr_int(int x)
{
	return(x * x);
}

double sqr_double(double x)
{
	return(x * x);
}

int main(void)
{
	int nx;
	double dx;

	printf("��������͂��Ă�������:");
	scanf_s("%d", &nx);
	printf("���̒l�̓���:%d\n", sqr_int(nx));

	printf("��������͂��Ă�������:");
	scanf_s("%lf", &dx);
	printf("���̒l�̓���:%f\n", sqr_double(dx));

	return(0);
}