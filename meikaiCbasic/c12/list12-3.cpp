//学生を表す構造体で表した左中くん

#include <stdio.h>
#include <string.h>

struct gstudent{
	char name[20];
	int height;
	float weight;
	long schols;
};

int main(void)
{
	struct gstudent sanaka;

	strcpy_s(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 60.5;
	sanaka.schols = 70000;

	printf("氏  名 = %s\n", sanaka.name);
	printf("身  長 = %d\n", sanaka.height);
	printf("体  重 = %f\n", sanaka.weight);
	printf("奨学金 = %ld\n", sanaka.schols);

	return(0);
}