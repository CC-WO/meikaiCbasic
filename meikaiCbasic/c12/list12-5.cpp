//超能力をもったひろ子さん

#include <stdio.h>

struct gstudent{
	char	name[20];
	int		height;
	float	weight;
	long	schols;
};

void hiroko_magic(gstudent *std)
{
	if ((*std).height < 180)	(*std).height = 180;
	if ((*std).weight >80)		(*std).weight = 80;
}

int main(void)
{
	struct gstudent sanaka = { "Sanaka", 175, 60.5, 70000 };

	hiroko_magic(&sanaka);

	printf("氏  名 = %s\n", sanaka.name);
	printf("身  長 = %d\n", sanaka.height);
	printf("体  重 = %f\n", sanaka.weight);
	printf("奨学金 = %ld\n", sanaka.schols);

	return(0);
}