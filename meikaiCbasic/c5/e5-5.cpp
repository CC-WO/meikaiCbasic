//”z—ñ‚Ì—v‘f”‚ğ8ŒÂ‚É•ÏX‚¹‚æ

#include <stdio.h>

int main(void)
{
	int i;
	int va[8];

	for (i = 0; i < 8; i++){
		printf("va[%d]:", i);
		scanf_s("%d", &va[i]);
	}

	for (i = 0; i < 8; i++){
		int temp = va[i];
		va[i] = va[7 - i];
		va[7 - i] = temp;
	}

	for (i = 0; i < 8; i++)
		printf("va[%d]=%d\n", i , va[i]);

	return(0);

}