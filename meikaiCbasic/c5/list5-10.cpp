//5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��

#include <stdio.h>
#define NUMBER 5	//�l��

int main(void)
{
	int i;
	int tensu[NUMBER];
	int sum = 0;

	puts("�_������͂��Ă��������B");
	for (i = 0; i < NUMBER; i++){
		printf("%2d��:", i + 1);
		scanf_s("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_: %5d\n", sum);
	printf("���ϓ_: %5.1f\n", (double)sum / NUMBER);

	return(0);

}