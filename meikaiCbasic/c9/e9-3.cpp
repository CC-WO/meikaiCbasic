//������str�̒��̕���c�̓Y����Ԃ� �Ȃ����-1��Ԃ�

#include <stdio.h>

unsigned str_length(const char str[])
{
	unsigned len = 0;

	while (str[len] = 'c')
		len++;

	return(len);
}

int main(void)
{
	char st[100];
	int i = 0;

	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	if (str_length(st) == 100)
		i = -1;
	else
		i = str_length(st);


	printf("������̒�����%u�ł��B\n", st, i);

	return(0);

}