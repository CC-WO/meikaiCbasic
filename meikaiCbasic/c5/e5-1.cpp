//先頭から順に0,1,2,3,4を代入せよ

#include <stdio.h>

int main(void)
{
	int i;
	int va[5];

	for (i = 0; i < 5; i++)
		va[i] = i;

	for (i = 0; i < 5; i++)
		printf("va[%d] = %d\n", i, va[i]);

	return(0);
}