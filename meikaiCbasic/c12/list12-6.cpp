//���\�͂��������Ђ�q����i���̂Q�j

#include <stdio.h>

typedef struct{
	char	name[20];
	int		height;
	float	weight;
	long	schols;
}student;

void hiroko(student *std)
{
	if (std->height < 180)	std->height = 180;
	if (std->weight > 80)	std->weight = 80;
}

int main(void)
{
	student sanaka = { "Sanaka", 175, 60.5, 70000 };

	hiroko(&sanaka);
	
	printf("��  �� = %s\n", sanaka.name);
	printf("�g  �� = %d\n", sanaka.height);
	printf("��  �d = %f\n", sanaka.weight);
	printf("���w�� = %ld\n", sanaka.schols);

	return(0);
}