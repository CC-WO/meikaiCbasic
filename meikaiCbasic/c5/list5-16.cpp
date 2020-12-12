//1000ˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚éver2

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

	printf("æœ‚ğs‚Á‚½‰ñ”:%lu\n:", counter);

	return(0);

}