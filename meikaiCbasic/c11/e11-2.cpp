//������str�̒��ɕ���c���܂܂�Ă���΂��̕����ւ̃|�C���^��Ԃ��A�܂܂�Ă��Ȃ����NULL��Ԃ��֐����쐬����

#include <stdio.h>

char *str_chr(const char *str, int c)
{
	while (*str++ == 'c')
		c++;
	
	if (c == 0)
		return(NULL);
}

int main(void)
{
	char st[100];
	int c = 0;

	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	str_chr(st, c);

	printf("%s", st);

	return(0);
}