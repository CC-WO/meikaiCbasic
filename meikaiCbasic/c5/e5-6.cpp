//変数aがdouble型で、変数bがint型であるとする。以下の代入によって、それぞれの変数の値はどうなるか説明せよ

#include <stdio.h>

int main(void)
{
	int a;
	double b;

	a = b = 1.5;

	printf("a:%d\nb:%f", a, b);

	return(0);
}