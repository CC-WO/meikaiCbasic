//������str���󕶎���ɂ���֐����쐬����

#include <stdio.h>

void null_string(char str[])
{

	str = { '\0' };
	/*
	unsigned len = 0;
	int i;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
		str[i] = '\0';
	*/

}

int main(void)
{
	char st[100];

	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	null_string(st);

	printf("%s", st);

	return(0);


}