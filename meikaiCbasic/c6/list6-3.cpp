//2‚Â‚Ì®”‚Ì“ñæ‚Ì·‚ğ‹‚ß‚é

#include <stdio.h>

int sqr(int x)
{
	return(x * x);
}

int diff(int x, int y)
{
	return((x > y) ? x-y : y-x );
}

int main(void)
{
	int kx, ky, kx2, ky2;

	puts("2‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”kx:");	scanf_s("%d", &kx);
	printf("®”ky:");	scanf_s("%d", &ky);

	kx2 = sqr(kx);
	ky2 = sqr(ky);
	printf("kx‚Ì“ñæ‚Æky‚Ì“ñæ‚Ì·‚Í%d‚Å‚·B\n", diff(kx2, ky2));

	return(0);
}