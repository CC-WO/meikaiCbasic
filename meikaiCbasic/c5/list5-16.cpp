//1000�ȉ��̑f�������߂�ver2

#include <stdio.h>

int main(void)
{	
	int i, no;
	unsigned long counter = 0;

	no = 2;
	printf("%d\n", no++);

	for (; no <= 1000; no += 2){
		for (i = 2; i < no; i++){
			counter++;
			if (no % i == 0)
				break;
		}
		if (no == i)
			printf("%d\n", no);
	}

	printf("�揜���s������:%lu\n:", counter);

	return(0);

}