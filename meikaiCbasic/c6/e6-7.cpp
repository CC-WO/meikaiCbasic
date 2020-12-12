//要素数がnoであるint型の配列vcの要素の最小値を返す関数を作成せよ

#include <stdio.h>

int min_of(const int vc[], int no)
{
	int i;
	int min = vc[0];

	for (i = 0; i < no; i++){
		min = (min < vc[i]) ? min : vc[i];
	}

	return(min);
}

int main(void)
{
	int i;
	int n;
	int ma[] = { 0 };

	printf("要素数:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		printf("要素[%d]:", i + 1);
		scanf_s("%d", &ma[i]);
	}

	printf("最小値:%d\n", min_of(ma, n));

	return(0);
}