//���int�����^�̏������ق��̒l��Ԃ��֐����쐬����

#include <stdio.h>

int minof(int ta, int tb)
{
	int x;

	x = (ta < tb) ? ta : tb;

	return(x);

}

int main(void)
{
	int a, b;

	printf("����1:");	scanf_s("%d", &a);
	printf("����2:");	scanf_s("%d", &b);

	printf("�������ق���:%d\n", minof(a, b));

	return(0);

}