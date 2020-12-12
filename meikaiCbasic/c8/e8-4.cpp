//性別や季節などを表す列挙体を自由に定義し、それを用いたプログラムを作成せよ。
//デバッグエラー

#include <stdio.h>

enum season {Spring,Summer,Autumn,Winter,Invalid};

void spring(void)
{
	puts("春です。");
}

void summer(void)
{
	puts("夏です。");
}

void autumn(void)
{
	puts("秋です。");
}

void winter(void)
{
	puts("冬です。");
}

enum season select(void)
{
	int tmp;

	do{
		printf("0…春 1…夏 2…秋 3…冬 4…終了");
		scanf_s("%d", &tmp);
	} while (tmp < Spring || tmp >Invalid);
	return(tmp);
}

int main(void)
{
	enum season selected;

	do{
		switch (selected = select()){
		case Spring:spring();	break;
		case Summer:summer();	break;
		case Autumn:autumn();	break;
		case Winter:winter();	break;
		}
	} while (selected != Invalid);

	return(0);
}