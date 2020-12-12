//配列の要素に値を読み込んで表示

#include <stdio.h>

int main(void)
{
	int i;
	int va[5];


	for (i = 0; i < 5; i++){
		printf("va[%d]:", i);
		scanf_s("%d", &va[i]);
	}

	for (i = 0; i < 5; i++)
		printf("vx[%d] = %d\n", i, va[i]);

	return(0);

}
