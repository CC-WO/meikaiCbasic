//ˆÙ‚È‚énŒÂ‚Ì®”‚©‚çrŒÂ‚Ì®”‚ğæ‚è‚¾‚·‘g‚İ‡‚í‚¹nCr‚ğ‹‚ß‚éŠÖ”‚ğì¬‚¹‚æ

#include <stdio.h>

int fact(int n)
{
	int sum = 1;

	for (; n > 0; n--)
		sum *= n;

	return(sum);
}

int combination(int n, int r)
{
	int sum = 1;

	sum = fact(n) / fact(r);

	return(sum);
}

int main(void)
{
	int na, nb;

	printf("2‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	printf("®”n:");	scanf_s("%d", &na);
	printf("®”r:");	scanf_s("%d", &nb);

	printf("nCr:%d\n", combination(na, nb));
	
	return(0);

}