//•¶š—ñstr‚ğno‰ñ‚¾‚¯˜A‘±‚µ‚Ä•\¦‚·‚éŠÖ”‚ğì¬‚¹‚æ

#include <stdio.h>

void put_stringn(const char str[], int no)
{
	int i = 0;

	for (i = 0; i < no; i++){
		printf("%s", str);
	}
}

int main(void)
{
	char st[100];
	int n;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", st);

	printf("o—Í‰ñ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%d", &n);

	put_stringn(st, n);

	return(0);
}