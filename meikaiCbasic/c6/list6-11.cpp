//英語の点数と数学の点数の最高点を求める

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

	printf("5人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++){
		printf("[%d]英語:", i + 1);		scanf_s("%d", &eng[i]);
		printf("   数学:");			scanf_s("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);
	max_m = max_of(mat, NUMBER);

	printf("英語の最高点=%d\n", max_e);
	printf("数学の最高点=%d\n", max_m);

	return(0);
}