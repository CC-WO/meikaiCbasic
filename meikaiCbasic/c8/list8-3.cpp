//�x��𔭂��Ȃ���\�����s���}�N���i�ԈႢ�j

#include <stdio.h>

#define putsa(str)	(putchar('\a');	puts(str);)

int main(void)
{
	int na;

	printf("��������͂��Ă�������:");
	scanf_s("%d", &na);

	if (na)
		putsa("���̐���0�ł���܂���B");
	else
		putsa("���̐���0�ł��B");

	return(0);
}

//�r���h�o���܂���B