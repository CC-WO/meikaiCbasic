//Œx•ñ‚ğn‰ñ‚¾‚¯”­‚·‚éŒx•ñ

#include <stdio.h>

void alert(int no)
{
	while (no-->0)
	putchar('\a');
}

int main(void)
{
	int n;

	printf("Œx•ñ‰ñ”:");	scanf_s("%d", &n);

	alert(n);

	return(0);

}