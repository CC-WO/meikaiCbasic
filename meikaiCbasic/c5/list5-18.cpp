//1000�ȉ��̑f�������߂�ver4

#include <stdio.h>

int main(void)
{
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;

	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (no = 5; no <= 1000; no += 2){
		for (i = 1; i < ptr; i++){
			counter++;
			if (no % prime[i] == 0)
				break;
		}
		if (ptr == i)
			prime[ptr++] = no;
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("�揜���s������:%lu", counter);

	return(0);

}