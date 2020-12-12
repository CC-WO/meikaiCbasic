//5人の学生の点数を読み込んで合計点と平均点を表示

#include <stdio.h>

int main(void)
{
	int uchida;
	int satoh;
	int sanaka;
	int hiraki;
	int masaki;
	int sum = 0;

	puts("点数を入力してください!");
	printf("1番:");	scanf_s("%d", &uchida);
	printf("2番:");	scanf_s("%d", &satoh);
	printf("3番:");	scanf_s("%d", &sanaka);
	printf("4番:");	scanf_s("%d", &hiraki);
	printf("5番:");	scanf_s("%d", &masaki);

	sum += uchida;
	sum += satoh;
	sum += sanaka;
	sum += hiraki;
	sum += masaki;

	printf("合計点:%5d\n", sum);
	printf("平均点:%5.1f\n", (double)sum / 5);

	return(0);

}