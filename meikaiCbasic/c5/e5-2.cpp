//先頭から順に5,4,3,2,1を代入せよ

#include <stdio.h>

int main(void)
{
	int i;
	int va[5];

	for (i = 0; i < 5; i++)
		va[i] = 5 - i;

	for (i = 0; i < 5; i++)
		printf("va[%d] = %d\n", i, va[i]);

	return(0);

}