//べき乗を求める

#include <stdio.h>

double power(double dx, int no)
{
	int i;
	double tmp = 1.0;

	for (i = 1; i <= no; i++){
		tmp *= dx;
	}

	return(tmp);

	return(0);
}

int main(void)
{
	int n;
	double x;

	printf("実数を入力してください:");	scanf_s("%lf", &x);
	printf("整数を入力してください:");	scanf_s("%d", &n);

	printf("%.2fの%d乗は%.2fです。\n", x, n, power(x, n));

	return(0);


}