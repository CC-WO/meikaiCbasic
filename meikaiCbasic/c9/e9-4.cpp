//������str�̒��ɕ���c���܂܂�Ă������Ԃ��֐����쐬����

#include <stdio.h>

int str_chnum(const char str[])
{
	unsigned len = 0;
	int c = 0;

	while (str[len] == 'c')
		c++;
	return(c);
}

int main(void)
{
	char st[100];
	int c = 0;


	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	printf("������%s�̒��̕���c�̐���%d�ł��B\n", st, str_chnum(st));

	return(0);
}