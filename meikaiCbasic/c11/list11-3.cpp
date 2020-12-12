//文字列の代入（？）
//ビルドエラー：初期化子を代入することは出来ない

#include <stdio.h>

int main(void)
{
	char str[] = "ABC";
	char *ptr = "123";

	str = "DEF";
	ptr = "456";

	printf("str = \"%s\"\n", str);
	printf("ptr = \"%s\"\n", ptr);
	
	return(0);
}