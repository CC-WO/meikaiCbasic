//unsigned�^�����E�ɃV�t�g�����l��\��

#include <stdio.h>

int count_bits(unsigned x)
{
	int count = 0;
	while (x){
		if (x & 1U)
			count++;
		x >>= 1;
	}

	return(count);
}

int int_bits(void)
{
	return(count_bits(~0U));
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--){
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
}

int main(void)
{
	unsigned no, nx;

	printf("�񕉂̐�������͂��Ă�������:");
	scanf_s("%u", &nx);
	printf("���r�b�g�V�t�g���܂���:");
	scanf_s("%u", &no);
	
	printf("\n����			=	");		print_bits(nx);
	printf("\n���ɃV�t�g�����l	=	");		print_bits(nx << no);
	printf("\n�E�ɃV�t�g�����l	=	");		print_bits(nx >> no);
	putchar('\n');

	return(0);
}