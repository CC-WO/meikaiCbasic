//dx��no���Ԃ�ver2

#include <stdio.h>

double power(double dx, int no)
{
	double tmp = 1.0;

	while (no-- > 0)
		tmp *= dx;
	return(tmp);
}

int main(void)
{
	double x;
	int n;

	printf("����:");	scanf_s("%lf", &x);
	printf("����:");	scanf_s("%d", &n);

	printf("��:%f", power(x, n));

	return(0);
}