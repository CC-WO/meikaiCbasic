//文字列の長さを調べる（ポインタ版）

#include <stdio.h>

size_t str_length(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return(len);
}

int main(void)
{
	char st[100];

	printf("文字列を入力してください:");
	scanf_s("%s", st);

	printf("文字列%sの長さは&uです。\n", st, (unsigned)str_length(st));

	return(0);
}