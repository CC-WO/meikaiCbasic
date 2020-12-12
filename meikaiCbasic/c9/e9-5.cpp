//ŠÖ”put_string‚Æ“¯‚¶“®ì‚ğ‚·‚éŠÖ”‚ğ,putcharŠÖ”‚Å‚Í‚È‚­‚ÄprintfŠÖ”‚ğ—p‚¢‚Äì¬‚¹‚æ

#include<stdio.h>

void put_string(const char str[])
{
	unsigned i = 0;

	while (str[i])
		printf("%s", str[i]);
}

int main(void)
{
	char str[100];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", str);

	put_string(str);
	putchar('\n');

	return(0);
}