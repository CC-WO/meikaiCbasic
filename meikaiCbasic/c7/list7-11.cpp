//��_�Ԃ̋��������߂�

#include <stdio.h>
#include <math.h>

double dist(double x1, double x2, double y1, double y2)
{
	return(sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
}

int main(void)
{
	double x1, y1;
	double x2, y2;

	printf("<�_1>X���W:");	scanf_s("%lf", &x1);
	printf("     Y���W:");	scanf_s("%lf", &y1);
	printf("<�_2>X���W:");	scanf_s("%lf", &x2);
	printf("     Y���W:");	scanf_s("%lf", &y2);

	printf("��_�Ԃ̋�����%f�ł��B\n", dist(x1, y1, x2, y2));

	return(0);
}