//3�̐����̍ő�l��Ԃ��֐�

#include <stdio.h>

int max3(int x, int y, int z)
{
	int max = x;

	if (y > max) max = y;
	if (z > max) max = z;
	return(max);
}

int main(void){

	int na, nb, nc;

	puts("�O�̐�������͂��Ă��������B");
	printf("����1:");	scanf_s("%d", &na);
	printf("����2:");	scanf_s("%d", &nb);
	printf("����3:");	scanf_s("%d", &nc);

	printf("�ł��傫���l��%d�ł��B\n", max3(na, nb, nc));

	return(0);

}