//int�^�̎O��l��Ԃ��֐����쐬����

#include <stdio.h>

int cube(int x)
{
	int tc;

	tc = x * x * x;

	return(tc);
}

int main(void)
{
	int c;

	printf("����:");	scanf_s("%d", &c);

	printf("�O��l:%d\n", cube(c));

	return(0);
	
}