//<<�z��ɂ�镶����>>�̔z���<<�|�C���^�ɂ�镶����>>�̔z��

#include <stdio.h>

int main(void)
{
	int i;
	char st[3][6] = { "Turbo", "NA", "DOHC" };
	char *pt[3] = { "12345", "12", "1234" };

	for (i = 0; i < 3; i++)
		printf("st[%d] = \"%s\"\n", i, st[i]);

	for (i = 0; i < 3; i++)
		printf("pt[%d] = \"%s\"\n", i, pt[i]);

	return(0);

}