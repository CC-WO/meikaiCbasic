//文字列strの中に文字cが含まれている個数を返す関数を作成せよ

#include <stdio.h>

int str_chnum(const char str[])
{
	unsigned len = 0;
	int c = 0;

	while (str[len] == 'c')
		c++;
	return(c);
}

int main(void)
{
	char st[100];
	int c = 0;


	printf("文字列を入力してください:");
	scanf_s("%s", st);

	printf("文字列%sの中の文字cの数は%dです。\n", st, str_chnum(st));

	return(0);
}