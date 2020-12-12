//文字列を一文字ずつ表示

#include <stdio.h>

void put_string(const char str[])
{
	unsigned i = 0;

	while (str[i])
		putchar(str[i++]);

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