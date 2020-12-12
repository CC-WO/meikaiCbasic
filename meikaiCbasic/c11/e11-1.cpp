//•¶š—ñ‚Ì’·‚³‚ğ•Ô‚·ŠÖ”‚ğ“Yš‰‰Zq‚ğg‚í‚¸‚Éì¬‚¹‚æ

#include <stdio.h>

int str_len(const char *s)
{
	int i = 0;
	unsigned len = 0;

	while (s[i])
		len++;

	return(len);
	
}

int main(void)
{
	char sa[100];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%s", sa);

	printf("•¶š—ñ‚Ì’·‚³‚Í%u", str_len(sa));

	return(0);
}