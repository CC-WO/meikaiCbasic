//配列で実現する文字列とポインタで実現する文字列の共通点

#include <stdio.h>

int main(void)
{
	int i;
	char str[] = "ABC";
	char *qtr  = "123";

	for (i = 0; str[i]; i++)
		putchar(str[i]);
	putchar('\n');

	for (i = 0; qtr[i]; i++)
		putchar(qtr[i]);
	putchar('\n');

	printf("str = \"%s\"\n", str);
	printf("qtr = \"%s\"\n", qtr);

	return(0);
}