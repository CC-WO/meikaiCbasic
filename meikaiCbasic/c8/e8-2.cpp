/*
�Q�̒lx��y�̑傫�����̒l��Ԃ��֐��`���}�N���͈ȉ��̂悤�ɒ�`�����
#define max(x, y) (((x) > (y) ? (x) : (y))
���̃}�N���𗘗p���āA4�̒la,b,c,d�̍ő�l�����߂�
max(max(a,b),max(c,d))
�y��
max(max(max(a,b),c),d)
���ǂ̂悤�ɓW�J����邩�������A�l�@��������
*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a1 = 1, b1 = 2, c1 = 3, d1 = 4;
	int a2 = 1, b2 = 2, c2 = 3, d2 = 4;

	printf("%d\n", max((a1, b1), max(c1, d1)));
	printf("%d\n", max(max(max(a2, b2), c2), d2));

	return(0);

}

//���ʂ͓����H
