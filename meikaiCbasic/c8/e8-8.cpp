//標準入力に現れた行数をカウントするプログラムを作成せよ

#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;

	while ((ch = getchar()) != EOF){
		cnt++;
		printf("行数:%d\n", cnt-1);
	}

	return(0);
}