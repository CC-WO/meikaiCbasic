//ˆÈ‰º‚Ì‚æ‚¤‚É‰Šú‰»‚³‚ê‚½•¶š—ñstr‚ğ‹ó•¶š—ñ‚É‚·‚é‚É‚ÍA‚Ç‚Ì‚æ‚¤‚È‘€ì‚ğs‚¦‚Î‚æ‚¢‚©‚ğ¦‚¹
//char str[] = "ABC";

#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[] = "ABC";

	for (i = 0; i < 4; i++)
		str[i] = '\0';

	printf("%s\n", str);

	return(0);
}