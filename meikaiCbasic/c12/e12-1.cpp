//現在時刻を表示せよ

#include <time.h>
#include <stdio.h>

void put_date(void)
{
	time_t current;
	struct tm *local;

	time(&current);
	local = localtime(&current);
	printf("%02時%02分%02秒"
		, local->tm_hour + 1
		, local->tm_min + 1
		, local->tm_sec + 1
		);
}

int main(void)
{
	printf("現在時刻は");
	put_date();
	printf("です。\n");

	return(0);
}