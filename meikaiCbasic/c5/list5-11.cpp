//5�l�̊w���̓_����ǂݍ���ōō��_�E�Œ�_��\��

#include <stdio.h>

#define NUMBER 5	//�l��

int main(void)
{
	int i;
	int tensu[NUMBER];
	int max, min;

	puts("�_������͂��Ă��������B");
	
	for (i = 0; i < NUMBER;i++){
		printf("%2d��:", i + 1);
		scanf_s("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (i = 1; i < NUMBER; i++){
		if (tensu[i] > max)	max = tensu[i];
		if (tensu[i] < min)	min = tensu[i];
	}

	printf("�ō��_:%d\n", max);
	printf("�Œ�_:%d\n", min);

	return(0);
}