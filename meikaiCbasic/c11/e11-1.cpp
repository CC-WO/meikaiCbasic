//������̒�����Ԃ��֐���Y�����Z�q���g�킸�ɍ쐬����

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

	printf("���������͂��Ă�������:");
	scanf_s("%s", sa);

	printf("������̒�����%u", str_len(sa));

	return(0);
}