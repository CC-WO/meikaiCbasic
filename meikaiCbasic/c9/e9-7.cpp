//���������납��t�ɏ��ɕ\������֐����쐬����

#include <stdio.h>

void put_rstring(const char str[])
{
	int i = 0;
	unsigned len = 0;

	while (str[len])
		len++;

	for (i = len; i > 0; i--)
		putchar(str[i]);

}

int main(void)
{
	char st[100];

	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	put_rstring(st);

	return(0);
}