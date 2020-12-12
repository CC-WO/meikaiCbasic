//二点間の距離を求める

#include <stdio.h>
#include <math.h>

double dist(double x1, double x2, double y1, double y2)
{
	return(sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
}

int main(void)
{
	double x1, y1;
	double x2, y2;

	printf("<点1>X座標:");	scanf_s("%lf", &x1);
	printf("     Y座標:");	scanf_s("%lf", &y1);
	printf("<点2>X座標:");	scanf_s("%lf", &x2);
	printf("     Y座標:");	scanf_s("%lf", &y2);

	printf("二点間の距離は%fです。\n", dist(x1, y1, x2, y2));

	return(0);
}