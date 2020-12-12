//関数put_stringと同じ動作をする関数を,putchar関数ではなくてprintf関数を用いて作成せよ

#include<stdio.h>

void put_string(const char str[])
{
	unsigned i = 0;

	while (str[i])
		printf("%s", str[i]);
}

int main(void)
{
	char str[100];

	printf("文字列を入力してください:");
	scanf_s("%s", str);

	put_string(str);
	putchar('\n');

	return(0);
}