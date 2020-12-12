//警報を発しながら表示を行うマクロ（間違い）

#include <stdio.h>

#define putsa(str)	(putchar('\a');	puts(str);)

int main(void)
{
	int na;

	printf("整数を入力してください:");
	scanf_s("%d", &na);

	if (na)
		putsa("その数は0でありません。");
	else
		putsa("その数は0です。");

	return(0);
}

//ビルド出来ません。