//�v�f����no�ł���int�^�̔z��vc�̗v�f�̍ŏ��l��Ԃ��֐����쐬����

#include <stdio.h>

int min_of(const int vc[], int no)
{
	int i;
	int min = vc[0];

	for (i = 0; i < no; i++){
		min = (min < vc[i]) ? min : vc[i];
	}

	return(min);
}

int main(void)
{
	int i;
	int n;
	int ma[] = { 0 };

	printf("�v�f��:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		printf("�v�f[%d]:", i + 1);
		scanf_s("%d", &ma[i]);
	}

	printf("�ŏ��l:%d\n", min_of(ma, n));

	return(0);
}