//dxのno乗を返すver2

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

	printf("実数:");	scanf_s("%lf", &x);
	printf("整数:");	scanf_s("%d", &n);

	printf("解:%f", power(x, n));

	return(0);
}