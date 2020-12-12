//ポインタによって身長を間接的に操作する

#include <stdio.h>

int main(void)
{
	int sato	= 178;
	int sanaka	= 175;
	int hiraki	= 165;
	int masaki	= 179;

	int *isako, *hiroko;

	isako	= &sato;
	hiroko	= &masaki;

	printf("いさ子さんの好きな人の身長:%d\n", *isako);
	printf("ひろ子さんの好きな人の身長:%d\n", *hiroko);

	isako = &sanaka;

	*hiroko = 180;

	putchar('\n');
	printf("佐藤くんの身長:%d\n", sato);
	printf("佐仲くんの身長:%d\n", sanaka);
	printf("平木くんの身長:%d\n", hiraki);
	printf("正樹くんの身長:%d\n", masaki);
	printf("いさ子さんの好きな人の身長:%d\n", *isako);
	printf("ひろ子さんの好きな人の身長:%d\n", *hiroko);

	return(0);

}