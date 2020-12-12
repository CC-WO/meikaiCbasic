//1000ˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚éver1

#include <stdio.h>

int main(void)
{
	int i, no;
	unsigned long counter = 0;

	for (no = 2; no <= 1000; no++){
		for (i = 2; i < no; i++){
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