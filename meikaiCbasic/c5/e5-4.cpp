//�z��va�̗v�f�̕��т��t���ɂ������̂�vb�ɃR�s�[����

#include <stdio.h>

int main(void)
{
	int i;
	int va[5] = { 1, 2, 3, 4, 5 };
	int vb[5];

	for (i = 0; i < 5; i++)
		vb[i] = va[4 - i];

	for (i = 0; i < 5; i++)
		printf("va[%d] = %3d vb[%d] = %3d\n", i, va[i], i, vb[i]);
	
	return(0);

}