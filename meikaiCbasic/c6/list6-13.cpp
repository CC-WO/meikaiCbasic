//�v�f��no�̔z���vc�̍ő�l��Ԃ�

#include <stdio.h>

int max_of(const int vc[], int no)
{
	int i;
	int max = vc[0];
	for (i = 0; i < no; i++)
		max = (max>vc[i]) ? max : vc[i];
	return(max);
}

int main(void)
{
	int i;
	int ma[] = { 0 };
	int n;

	printf("�v�f����:");	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		printf("�v�f[%d]:", i + 1);
		scanf_s("%d", &ma[i]);
	}

	printf("�ő�l:%d\n", max_of(ma, n));

	return(0);

}