//4‚Â®”’l‚ÌÅ‘å’l‚ğ•Ô‚·

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

	printf("®”1:");	scanf_s("%d", &a);
	printf("®”2:");	scanf_s("%d", &b);
	printf("®”3:");	scanf_s("%d", &c);
	printf("®”4:");	scanf_s("%d", &d);

	printf("Å‘å’l:%d\n", max4(a, b, c, d));

	return(0);

}