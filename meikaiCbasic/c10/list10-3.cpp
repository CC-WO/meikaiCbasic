//�|�C���^�ɂ���Đg�����ԐړI�ɑ��삷��

#include <stdio.h>

int main(void)
{
	int sato	= 178;
	int sanaka	= 175;
	int hiraki	= 165;
	int masaki	= 179;

	int *isako, *hiroko;

	isako	= &sato;
	hiroko	= &masaki;

	printf("�����q����̍D���Ȑl�̐g��:%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g��:%d\n", *hiroko);

	isako = &sanaka;

	*hiroko = 180;

	putchar('\n');
	printf("��������̐g��:%d\n", sato);
	printf("��������̐g��:%d\n", sanaka);
	printf("���؂���̐g��:%d\n", hiraki);
	printf("��������̐g��:%d\n", masaki);
	printf("�����q����̍D���Ȑl�̐g��:%d\n", *isako);
	printf("�Ђ�q����̍D���Ȑl�̐g��:%d\n", *hiroko);

	return(0);

}