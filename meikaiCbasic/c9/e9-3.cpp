//文字列strの中の文字cの添字を返す なければ-1を返す

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

	printf("文字列を入力してください:");
	scanf_s("%s", st);

	if (str_length(st) == 100)
		i = -1;
	else
		i = str_length(st);


	printf("文字列の長さは%uです。\n", st, i);

	return(0);

}