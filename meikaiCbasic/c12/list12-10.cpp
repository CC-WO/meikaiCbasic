//2�_�Ԃ̋��������߂�

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

	printf("�_1��X���W:");	scanf_s("%d", &p1.x);
	printf("�_1��Y���W:");	scanf_s("%d", &p1.y);
	printf("�_2��X���W:");	scanf_s("%d", &p2.x);
	printf("�_2��Y���W:");	scanf_s("%d", &p2.y);

	return(0);
}