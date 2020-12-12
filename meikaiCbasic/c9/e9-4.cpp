//•¶š—ñstr‚Ì’†‚É•¶šc‚ªŠÜ‚Ü‚ê‚Ä‚¢‚éŒÂ”‚ğ•Ô‚·ŠÖ”‚ğì¬‚¹‚æ

#include <stdio.h>

int str_chnum(const char str[])
{
	unsigned len = 0;
	int c = 0;

	while (str[len] == 'c')
		c++;
	return(c);
}

int main(void)
{
	char st[100];
	int c = 0;


	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", st);

	printf("•¶š—ñ%s‚Ì’†‚Ì•¶šc‚Ì”‚Í%d‚Å‚·B\n", st, str_chnum(st));

	return(0);
}