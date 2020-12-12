//2点間の距離を求める

#include <stdio.h>
#include <math.h>

#define sqr(n)	((n)*(n))

typedef struct{
	int x;
	int y;
}point;

double distanceod(point pa, point pb)
{
	return(sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y)));
}

int main(void)
{
	point p1, p2;

	printf("点1のX座標:");	scanf_s("%d", &p1.x);
	printf("点1のY座標:");	scanf_s("%d", &p1.y);
	printf("点2のX座標:");	scanf_s("%d", &p2.x);
	printf("点2のY座標:");	scanf_s("%d", &p2.y);

	return(0);
}