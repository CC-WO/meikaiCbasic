//�x��𔭂��Ȃ���\�����s���}�N��

#include <stdio.h>

#define putsa(str)	(putchar('\a'),puts(str))

int main(void)
{
	int na;

	printf("��������͂��Ă�������:");
	scanf_s("%d", &na);

	if (na){
		putsa("���̐���0�ł͂���܂���B");
	}
	else
		putsa("���̐���0�ł��B");

	return(0);

}