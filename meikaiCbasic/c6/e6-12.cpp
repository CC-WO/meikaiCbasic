//静的記憶域期間が与えられた配列の全要素が0で初期化されることを確認するプログラムをさくせいせよ

#include <stdio.h>

void static_s(void)
{
	int i;
	static int sx[5];

	for (i = 0; i < 5; i++){
		printf("sx[%d]=%d\n",i+1, sx[i]);
	}
}

int main(void)
{
	static_s();

	return(0);
}