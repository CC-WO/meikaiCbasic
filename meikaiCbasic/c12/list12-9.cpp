//今日の日付を表示する

#include <time.h>
#include <stdio.h>

void put_date(void)
{
	time_t		current;
	struct tm	*local;
	char wday_name[][3] = { "日", "月", "火", "水", "木", "金", "土" };

	time(&current);
	local = localtime_s(&current);
	printf("%4d年%02d月%02d日(%s)"
		, local->tm_year + 1900
		, local->tm_mon + 1
		, local->tm_mday
		, wday_name[local->tm_wday]
		);
}


int main(void)
{
	printf("今日は");
	put_date();
	printf("です。\n");

	return(0);
}