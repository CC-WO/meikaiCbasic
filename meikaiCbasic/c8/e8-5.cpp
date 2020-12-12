//®”n‚ÌŠKæ‚ğ•Ô‚·ŠÖ”‚ğÄ‹N‚ğ—p‚¢‚¸‚É’è‹`‚¹‚æ

#include <stdio.h>

int fact(int n)
{
	int sum = 1;

	for (; n > 0; n--)
		sum *= n;

	return(sum);
}

int main(void)
{
	int na;

	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%d",&na);

	printf("ŠKæ‚Í%d\n", fact(na));

	return(0);

}