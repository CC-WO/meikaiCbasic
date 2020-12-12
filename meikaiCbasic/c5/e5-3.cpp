//æ“ª‚©‚ç‡‚É5,4,3,2,1‚Å‰Šú‰»‚¹‚æ

#include <stdio.h>

int main(void)
{
	int i;
	int va[5] = { 5, 4, 3, 2, 1 };

	for (i = 0; i < 5; i++)
		printf("va[%d]= %d\n", i, va[i]);

	return(0);
}