//学生を表す構造体で表した左中くんを初期化

#include <stdio.h>

struct gstudent{
	char	name[20];
	int		height;
	float	weight;
	long	schols;
};

int main(void)
{
	struct gstudent sanaka = { "Sanaka", 175, 60.5 };

	printf("氏  名 = %s\n", sanaka.name);
	printf("身  長 = %d\n", sanaka.height);
	printf("体  重 = %f\n", sanaka.weight);
	printf("奨学金 = %ld\n", sanaka.schols);

	return(0);
}