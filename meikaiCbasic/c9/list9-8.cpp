//文字列の長さを調べる

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

	printf("文字列を入力してください:");
	scanf_s("%s", st);

	printf("文字列%sの長さは%uです。\n", st, str_length(st));

	return(0);
}