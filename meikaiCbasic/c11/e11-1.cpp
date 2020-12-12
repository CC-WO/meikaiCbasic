//文字列の長さを返す関数を添字演算子を使わずに作成せよ

#include <stdio.h>

int str_len(const char *s)
{
	int i = 0;
	unsigned len = 0;

	while (s[i])
		len++;

	return(len);
	
}

int main(void)
{
	char sa[100];

	printf("文字列を入力してください:");
	scanf_s("%s", sa);

	printf("文字列の長さは%u", str_len(sa));

	return(0);
}