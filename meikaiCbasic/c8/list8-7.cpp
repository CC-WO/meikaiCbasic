//Å‘åŒö–ñ”‚ğ‹‚ß‚é

#include <stdio.h>

int gcdf(int vx, int vy)
{
	return(vy == 0 ? vx : gcdf(vy, vx % vy));
}

int gcd(int va, int vb)
{
	return(va > vb ? gcdf(va, vb) : gcdf(vb, va));
}

int main(void)
{
	int n1, n2;

	puts("2‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”1:");	scanf_s("%d", &n1);
	printf("®”2:");	scanf_s("%d", &n2);

	printf("Å‘åŒö–ñ”‚Í%d‚Å‚·B\n", gcd(n1, n2));

	return(0);
}