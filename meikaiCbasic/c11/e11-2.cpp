//文字列strの中に文字cが含まれていればその文字へのポインタを返し、含まれていなければNULLを返す関数を作成せよ

#include <stdio.h>

char *str_chr(const char *str, int c)
{
	while (*str++ == 'c')
		c++;
	
	if (c == 0)
		return(NULL);
}

int main(void)
{
	char st[100];
	int c = 0;

	printf("文字列を入力してください:");
	scanf_s("%s", st);

	str_chr(st, c);

	printf("%s", st);

	return(0);
}