//�z��̑S�v�f��ʂ̔z��ɃR�s�[

#include <stdio.h>

int main(void)
{

	int i;
	int va[5] = { 15, 20, 30 };
	int vb[5];

	for (i = 0; i < 5; i++)
		vb[i] = va[i];

	for (i = 0; i < 5; i++)
		printf("%3d%3d\n", va[i], vb[i]);

	return(0);

}