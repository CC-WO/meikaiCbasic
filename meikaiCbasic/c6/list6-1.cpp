//2�̐����̑傫�����̒l��Ԃ��֐�

#include <stdio.h>

int maxof(int x,int y)
{
	if (x > y)
		return(x);
	else
		return(y);

	//return((x>y)?x:y);

}

int main(void)
{
	int na, nb;

	puts("2�̐�������͂��Ă��������B");
	printf("����1:");	scanf_s("%d", &na);
	printf("����2:");	scanf_s("%d", &nb);

	printf("�傫�����̒l��%d�ł��B\n",maxof(na, nb));

	return(0);

}