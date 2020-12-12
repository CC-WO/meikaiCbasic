//関数の引数とポインタ

#include <stdio.h>

void hiroko(int *height)
{
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int sato = 178;
	int sanaka = 175;
	int hiraki = 165;
	int masaki = 179;

	hiroko(&masaki);

	printf("佐藤くんの身長:%d\n", sato);
	printf("佐仲くんの身長:%d\n", sanaka);
	printf("平木くんの身長:%d\n", hiraki);
	printf("正樹くんの身長:%d\n", masaki);

	return(0);
}