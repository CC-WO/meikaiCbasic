#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int vc[], int key, int no)
{
	int i;

	vc[no] = key;

	for (i = 0; vc[i] != key; i++)
		;

	return(i == no ? FAILED : i);

}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++){
		printf("vx[%d]:", i);
		scanf_s("%d", &vx[i]);
	}

	printf("探す値:");	scanf_s("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("\a探索に失敗しました。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);

	return(0);

}
