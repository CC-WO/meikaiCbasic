//char�^�������t���������Ȃ����𔻕�

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("���̏����n��char�^��");

	if (CHAR_MIN)
		puts("�����t���ł��B");
	else
		puts("�����Ȃ��ł��B");

	return(0);
}