//•¶š—ñstr‚ğ‹ó•¶š—ñ‚É‚·‚éŠÖ”‚ğì¬‚¹‚æ

#include <stdio.h>

void null_string(char str[])
{

	str = { '\0' };
	/*
	unsigned len = 0;
	int i;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
		str[i] = '\0';
	*/

}

int main(void)
{
	char st[100];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", st);

	null_string(st);

	printf("%s", st);

	return(0);


}