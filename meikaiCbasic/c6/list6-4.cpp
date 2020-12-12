//‚×‚«æ‚ğ‹‚ß‚é

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

	printf("À”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");	scanf_s("%lf", &x);
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");	scanf_s("%d", &n);

	printf("%.2f‚Ì%dæ‚Í%.2f‚Å‚·B\n", x, n, power(x, n));

	return(0);


}