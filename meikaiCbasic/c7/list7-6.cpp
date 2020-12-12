#include <stdio.h>

int count_bits(unsigned x)
{
	int count = 0;
	while (x){
		if (x & 1U)
			count++;
		x >>= 1;
	}

	return(count);
}

int int_bits(void)
{
	return(count_bits(~0U));
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--){
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
}

int main(void)
{
	unsigned na, nb;

	puts("2‚Â‚Ì”ñ•‰‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
	printf("®”A:");	scanf_s("%d", &na);
	printf("®”B:");	scanf_s("%d", &nb);

	printf("\nA				=");	print_bits(na);
	printf("\nB				=");	print_bits(nb);
	printf("\nA & B			=");	print_bits(na & nb);
	printf("\nA | B			=");	print_bits(na | nb);
	printf("\nA ^ B			=");	print_bits(na ^ nb);
	printf("\n~A			=");	print_bits(~na);
	printf("\n~B			=");	print_bits(~nb);
	putchar('\n');

	return(0);


}