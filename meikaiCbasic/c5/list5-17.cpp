//1000ˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚éver3

#include <stdio.h>

int main(void)
{
	int i, no;
	unsigned long counter = 0;

	no = 2;
	printf("%d\n", no++);

	for (; no <= 1000; no += 2){
		for (i = 3; i < no; i += 2){
			counter++;
			if (no % i == 0)
				break;
		}
		if (no == i)
			printf("%d\n", no);
	}

	printf("æœ‚ğs‚Á‚½‰ñ”:%lu\n", counter);

	return(0);
}