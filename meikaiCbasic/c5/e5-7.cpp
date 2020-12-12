//x= 1 2 3 y= 1 5
//   4 5 6    5 3
//            8 1
//‚Ìs—ñ‚ÌÏ‚ğ‹‚ß‚æ

#include <stdio.h>

int main(void)
{
	int i, j, n;
	int ma[2][3] = { { 1, 2, 3 },
				     { 4, 5, 6 }, };
	int mb[3][2] = { { 1, 5 },
				     { 5, 3 },
	                 { 8, 1 }, };
	int mc[2][2] = { 0 };

	for (n = 0; n < 2; n++){
		for (i = 0; i < 2; i++){
			for (j = 0; j < 3; j++){
				mc[n][i] += ma[n][j] * mb[j][i];
			}
		}
	}

	for (n = 0; n < 2; n++){
		for (i = 0; i < 2; i++){
			printf("%3d", mc[n][i]);
		}
		putchar('\n');
	}

	return(0);
}