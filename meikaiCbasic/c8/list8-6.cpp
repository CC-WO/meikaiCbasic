//ŠKæ‚ğ‹‚ß‚é

#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
		return(n*factorial(n - 1));
	else
		return(1);
}

int main(void)
{
	int num;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%d", &num);

	printf("‚»‚Ì”‚ÌŠKæ‚Í%d‚Å‚·B\n", factorial(num));

	return(0);
}