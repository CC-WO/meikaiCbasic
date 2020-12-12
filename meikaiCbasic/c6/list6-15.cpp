//’€ŸŒŸõ ”Ô•º–@

#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int vc[], int key, int no)
{
	int i = 0;

	vc[no] = key;

	while (1){
		if (vc[i] == key)	break;
		i++;
	}

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

	printf("’T‚·’l:");	scanf_s("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FAILED)
		puts("\a’Tõ‚É¸”s‚µ‚Ü‚µ‚½B");
	else
		printf("%d‚Í%d”Ô–Ú‚É‚ ‚è‚Ü‚·B\n", ky, idx + 1);

	return(0);

}
