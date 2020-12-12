//2つの整数の大きい方の値を返す関数

#include <stdio.h>

int maxof(int x,int y)
{
	if (x > y)
		return(x);
	else
		return(y);

	//return((x>y)?x:y);

}

int main(void)
{
	int na, nb;

	puts("2つの整数を入力してください。");
	printf("整数1:");	scanf_s("%d", &na);
	printf("整数2:");	scanf_s("%d", &nb);

	printf("大きい方の値は%dです。\n",maxof(na, nb));

	return(0);

}