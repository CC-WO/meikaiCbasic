//�p��̓_���Ɛ��w�̓_���̍ō��_�����߂�

#include <stdio.h>

#define NUMBER 5

int max_of(int vc[], int no)
{
	int i;
	int max = vc[0];
	for (i = 0; i < NUMBER; i++)
		if (vc[i]>max)
			max = vc[i];
	return(max);
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e, max_m;

	printf("5�l�̓_������͂��Ă��������B\n", NUMBER);
	for (i = 0; i < NUMBER; i++){
		printf("[%d]�p��:", i + 1);		scanf_s("%d", &eng[i]);
		printf("   ���w:");			scanf_s("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);
	max_m = max_of(mat, NUMBER);

	printf("�p��̍ō��_=%d\n", max_e);
	printf("���w�̍ō��_=%d\n", max_m);

	return(0);
}