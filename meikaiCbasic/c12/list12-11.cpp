//車の移動と燃費の消費

#include <stdio.h>
#include <math.h>

#define sqr(n)	((n)*(n))

typedef struct{
	int x;
	int y;
}point;

typedef struct{
	double fuel;
	point pt;
}car;

void put_info(car c)
{
	printf("現在位置:(%d,%d)\n", c.pt.x, c.pt.y);
	printf("残り燃料:%.2fリットル\n", c.fuel);
}

int move(car *c, int dx, int dy)
{
	double dist = sqrt(sqr(dx) + sqr(dy));
	if (dist > c->fuel)
		return(0);
	c->pt.x += dx;
	c->pt.y += dy;
	c->fuel -= dist;
	return(1);
}

int main(void)
{
	car mycar = { 90.0, { 0, 0 } };

	while (1){
		int slct;
		int dx, dy;

		put_info(mycar);
		printf("移動しますか[YES-1/NO-0]:");
		scanf_s("%d", &slct);
		if (slct != 1)	break;
		printf("x方向の移動距離:");	scanf_s("%d", &dx);
		printf("y方向の移動距離:");	scanf_s("%d", &dy);

		if (!move(&mycar, dy, dx))
			puts("\a燃料不足で移動できません。");
	}
	return(0);
}