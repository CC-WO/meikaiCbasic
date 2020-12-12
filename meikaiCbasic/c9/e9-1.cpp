//～と書き換えてプログラムを実行し、その結果に対する考察を行え

#include <stdio.h>

int main(void)
{
	char str[] = "ABC\0DEF";

	printf("文字列strは%sです。\n", str);

	return(0);
}

//\0で文字列は終了したことになってABCだけ表示される