//�֐��̈����ƃ|�C���^

#include <stdio.h>

void hiroko(int *height)
{
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int sato = 178;
	int sanaka = 175;
	int hiraki = 165;
	int masaki = 179;

	hiroko(&masaki);

	printf("��������̐g��:%d\n", sato);
	printf("��������̐g��:%d\n", sanaka);
	printf("���؂���̐g��:%d\n", hiraki);
	printf("��������̐g��:%d\n", masaki);

	return(0);
}