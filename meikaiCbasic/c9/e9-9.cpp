//文字列strを空文字列にする関数を作成せよ

#include <stdio.h>

void null_string(char str[])
{

	str = { '\0' };
	/*
	unsigned len = 0;
	int i;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
		str[i] = '\0';
	*/

}

int main(void)
{
	char st[100];

	printf("文字列を入力してください:");
	scanf_s("%s", st);

	null_string(st);

	printf("%s", st);

	return(0);


}