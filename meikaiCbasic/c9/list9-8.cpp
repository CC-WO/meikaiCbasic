//������̒����𒲂ׂ�

#include <stdio.h>

unsigned str_length(const char str[])
{
	unsigned len = 0;

	while (str[len])
		len++;
	return(len);
}

int main(void)
{
	char st[100];

	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	printf("������%s�̒�����%u�ł��B\n", st, str_length(st));

	return(0);
}