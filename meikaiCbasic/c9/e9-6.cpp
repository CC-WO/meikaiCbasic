//文字列strをno回だけ連続して表示する関数を作成せよ

#include <stdio.h>

void put_stringn(const char str[], int no)
{
	int i = 0;

	for (i = 0; i < no; i++){
		printf("%s", str);
	}
}

int main(void)
{
	char st[100];
	int n;

	printf("文字列を入力してください:");
	scanf_s("%s", st);

	printf("出力回数を入力してください:");
	scanf_s("%d", &n);

	put_stringn(st, n);

	return(0);
}