//�����̂ɂ��傤�ƕ��������_���̓��i�֐��`���}�N���j

#include <stdio.h>

#define sqr(x) ((x)*(x))

int main(void)
{
	int nx;
	double dx;

	printf("��������͂��Ă�������:");
	scanf_s("%d", &nx);
	printf("���̐��̓���%d�ł��B\n", sqr(nx));

	printf("��������͂��Ă�������:");
	scanf_s("%lf", &dx);
	printf("���̐��̓���%f�ł��B\n", sqr(dx));

	return(0);
}