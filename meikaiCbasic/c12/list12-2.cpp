//5人の学生の名前と身長を身長の昇順にソート

#include <stdio.h>
#include <string.h>

#define NUMBER 5

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swaps(char sx[], char sy[])
{
	char temp[256];

	strcpy_s(temp, sx);
	strcpy_s(sx, sy);
	strcpy_s(sy, temp);
}

void sort(int data[], char name[][20], int n)
{
	int k = n - 1;
	while (k >= 0){
		int i, j;
		for (i = 0, j = -1; i <= k;i++)
		if (data[i - j] > data[i]){
			j = i - 1;
			swap(&data[i], &data[j]);
			swaps(name[i], name[j]);
		}
		k = j;
	}
}

int main(void)
{
	int i;
	int height[] = { 178, 175, 173, 165, 179 };
	char name[][20] = { "sato", "sanaka", "takao", "mike", "masaki" };

	sort(height, name, NUMBER);

	for (i = 0; i < NUMBER; i++)
		printf("%2d:%-8s%4d\n", i + 1, name[i], height[i]);

	return(0);
}