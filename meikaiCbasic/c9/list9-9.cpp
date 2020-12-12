//•¶Žš—ñ‚ðˆê•¶Žš‚¸‚Â•\Ž¦

#include <stdio.h>

void put_string(const char str[])
{
	unsigned i = 0;

	while (str[i])
		putchar(str[i++]);

}

int main(void)
{
	char str[100];


	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", str);

	put_string(str);
	putchar('\n');

	return(0);
}