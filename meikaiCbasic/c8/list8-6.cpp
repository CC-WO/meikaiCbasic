//�K������߂�

#include <stdio.h>

int factorial(int n)
{
	if (n > 0)
		return(n*factorial(n - 1));
	else
		return(1);
}

int main(void)
{
	int num;

	printf("��������͂��Ă�������:");
	scanf_s("%d", &num);

	printf("���̐��̊K���%d�ł��B\n", factorial(num));

	return(0);
}