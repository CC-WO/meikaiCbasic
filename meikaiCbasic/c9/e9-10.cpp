//•¶š—ñstr“à‚Ì‚·‚×‚Ä‚Ì”š•¶š‚ğíœ‚·‚éŠÖ”‚ğì¬‚¹‚æ

#include <stdio.h>

void del_digit(char str[])
{
	int ma[] = { 0 };
	unsigned i = 0;

	while (str[i]){
		if (str[i] >= '0'&& str[i] <= '9')
			str[i] = '\0';
		i++;
	}
}

int main(void)
{
	char sa[100];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", sa);

	del_digit(sa);

	printf("%s\n", sa);

	return(0);


}