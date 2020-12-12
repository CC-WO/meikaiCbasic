//•¶š—ñ‚Ì’·‚³‚ğ’²‚×‚é

#include <stdio.h>

unsigned str_length(const char str[])
{
	unsigned len = 0;

	while (str[len])
		len++;
	return(len);
}

int main(void)
{
	char st[100];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", st);

	printf("•¶š—ñ%s‚Ì’·‚³‚Í%u‚Å‚·B\n", st, str_length(st));

	return(0);
}