//�ׂ�������߂�

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

	printf("��������͂��Ă�������:");	scanf_s("%lf", &x);
	printf("��������͂��Ă�������:");	scanf_s("%d", &n);

	printf("%.2f��%d���%.2f�ł��B\n", x, n, power(x, n));

	return(0);


}