//�֐�put_string�Ɠ������������֐���,putchar�֐��ł͂Ȃ���printf�֐���p���č쐬����

#include<stdio.h>

void put_string(const char str[])
{
	unsigned i = 0;

	while (str[i])
		printf("%s", str[i]);
}

int main(void)
{
	char str[100];

	printf("���������͂��Ă�������:");
	scanf_s("%s", str);

	put_string(str);
	putchar('\n');

	return(0);
}