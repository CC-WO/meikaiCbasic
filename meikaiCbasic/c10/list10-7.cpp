//2‚Â‚Ì®”‚Ì˜a‚Æ·‚ğ‹‚ß‚é

#include <stdio.h>

void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum	= n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("2‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”A:");	scanf_s("%d", &na);
	printf("®”B:");	scanf_s("%d", &nb);

	sum_diff(na, nb, &wa, &sa);

	printf("˜a‚Í%d‚Å‚·B\n·‚Í%d‚Å‚·B\n", wa, sa);

	return(0);

}