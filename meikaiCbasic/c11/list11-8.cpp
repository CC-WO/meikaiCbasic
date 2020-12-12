//文字列をコピーする（悪い例）
//ビルドエラー：領域を超えての書き込み

#include <stdio.h>

char *str_copy(char *d, const char *s)
{
	char *t = d;

	while (*d++ = *s++)
		;
	return(t);
}

int main(void)
{
	char str[128]="ABCD";
	char *ptr = "EFGH";

	printf("文字列str:");	scanf_s("%s", str);

	str_copy(ptr, str);
	
	puts("strをptrにコピーしました。");
	printf("str = %s\n", str);
	printf("ptr = %s\n", ptr);

	return(0);
}