//4つ整数値の最大値を返す

#include <stdio.h>

int maxof(int ta, int tb)
{
	int tmp0;

	tmp0 = (ta > tb) ? ta : tb;

	return(tmp0);

}

int max4(int w, int x, int y, int z)
{
	int tmp;

	tmp = (maxof(x, y), maxof(y, z));

	return(tmp);
}

int main(void)
{
	int a, b, c, d;

	printf("整数1:");	scanf_s("%d", &a);
	printf("整数2:");	scanf_s("%d", &b);
	printf("整数3:");	scanf_s("%d", &c);
	printf("整数4:");	scanf_s("%d", &d);

	printf("最大値:%d\n", max4(a, b, c, d));

	return(0);

}