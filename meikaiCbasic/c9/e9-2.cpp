//以下のように初期化された文字列strを空文字列にするには、どのような操作を行えばよいかを示せ
//char str[] = "ABC";

#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[] = "ABC";

	for (i = 0; i < 4; i++)
		str[i] = '\0';

	printf("%s\n", str);

	return(0);
}