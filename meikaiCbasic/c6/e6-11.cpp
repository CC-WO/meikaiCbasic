//5人の学生の3教科の点数を2次元配列を用いて処理するプログラムを自由に作成せよ

#include <stdio.h>

void max(int ma[5][3])
{
	int i,j;

	int mx[3] = { 0 };

	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			mx[i] = (ma[j][i]>mx[0]) ? ma[i][j] : mx[i];
		}
	}

}

void ave(int ma[5][3])
{
	int i, j;
	int sum[5] = { 0 };
	int my[5] = { 0 };

	for (j = 0; j < 5; j++){
		for (i = 0; i < 3; i++){
			sum[j] += ma[j][i];
		}
		my[j] = sum[j] / 3;
	}
}

int main(void)
{
	
}