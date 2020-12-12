//名前をたずねて挨拶（文字列の読み込み）

#include <stdio.h>

int main(void)
{
	char name[10];

	printf("お名前は:");
	scanf_s("%s", name);

	printf("こんにちは、%sさん!!\n", name);

	return(0);
}