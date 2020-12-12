//“ñ‚Â‚Ìint®”Œ^‚Ì¬‚³‚¢‚Ù‚¤‚Ì’l‚ğ•Ô‚·ŠÖ”‚ğì¬‚¹‚æ

#include <stdio.h>

int minof(int ta, int tb)
{
	int x;

	x = (ta < tb) ? ta : tb;

	return(x);

}

int main(void)
{
	int a, b;

	printf("®”1:");	scanf_s("%d", &a);
	printf("®”2:");	scanf_s("%d", &b);

	printf("¬‚³‚¢‚Ù‚¤‚Í:%d\n", minof(a, b));

	return(0);

}