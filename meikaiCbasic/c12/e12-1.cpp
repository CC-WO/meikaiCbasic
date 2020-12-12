//Œ»İ‚ğ•\¦‚¹‚æ

#include <time.h>
#include <stdio.h>

void put_date(void)
{
	time_t current;
	struct tm *local;

	time(&current);
	local = localtime(&current);
	printf("%02%02•ª%02•b"
		, local->tm_hour + 1
		, local->tm_min + 1
		, local->tm_sec + 1
		);
}

int main(void)
{
	printf("Œ»İ‚Í");
	put_date();
	printf("‚Å‚·B\n");

	return(0);
}