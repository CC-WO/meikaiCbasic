//配列で実現する文字列とポインタで実現する文字列（その２）

#include <stdio.h>

int main(void)
{
	char str[6] = "ABC";
	char *ptr = "123";

	printf("str = \"%s\"\n", str);
	printf("ptr = \"%s\"\n", ptr);

	return(0);
}