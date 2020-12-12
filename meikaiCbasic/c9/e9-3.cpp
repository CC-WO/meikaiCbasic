//•¶š—ñstr‚Ì’†‚Ì•¶šc‚Ì“Yš‚ğ•Ô‚· ‚È‚¯‚ê‚Î-1‚ğ•Ô‚·

#include <stdio.h>

unsigned str_length(const char str[])
{
	unsigned len = 0;

	while (str[len] = 'c')
		len++;

	return(len);
}

int main(void)
{
	char st[100];
	int i = 0;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", st);

	if (str_length(st) == 100)
		i = -1;
	else
		i = str_length(st);


	printf("•¶š—ñ‚Ì’·‚³‚Í%u‚Å‚·B\n", st, i);

	return(0);

}