//�w����\���\���̂ŕ\������������

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

	printf("��  �� = %s\n", sanaka.name);
	printf("�g  �� = %d\n", sanaka.height);
	printf("��  �d = %f\n", sanaka.weight);
	printf("���w�� = %ld\n", sanaka.schols);

	return(0);
}