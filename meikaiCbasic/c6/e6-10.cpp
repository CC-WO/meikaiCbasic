//2�s3��̍s��ma��3�s2��̍s��mb�̐ς�2�s2��̍s��mc�Ɋi�[����֐�

#include <stdio.h>

void mul(const int ma[2][3], const int mb[3][2],int mc[2][2])
{
	int n, i, j;

	for (n = 0; n < 2; n++){
		for (i = 0; i < 2; i++){
			for (j = 0; j < 3; j++){
				mc[n][i] += ma[n][j] * mb[j][i];
			}
		}
	}
}

int main(void)
{
	int i, j;
	int ma[2][3];
	int mb[3][2];
	int mc[2][2];

	ma[2][3] = {{ 1, 2 }, { 3, 4 }, { 5, 6 } };
	mb[3][2] = { { 1, 2, 3 }, { 4, 5, 6 } };

	mul(ma, mb, mc);

	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("%d", mc[i][j]);
		}
		putchar('\n');
	}

	return(0);
}