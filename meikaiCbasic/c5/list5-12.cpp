//5�l�̊w���̓_����ǂݍ����60�_�ȏ�̊w���̈ꗗ��\��

#include <stdio.h>

#define NUMBER 5	//�l��

int main(void)
{
	int i;
	int snum = 0;
	int tensu[NUMBER];
	int succs[NUMBER];

	puts("�_������͂��Ă��������B");
	for (i = 0; i < 5; i++){
		printf("%2d��:", i + 1);
		scanf_s("%d", &tensu[i]);
		if (tensu[i] >= 60)
			succs[snum++] = i;
	}

	puts("���i�҈ꗗ");
	puts("-------------------");
	for (i = 0; i < snum; i++){
		printf("%2d��(%3d�_)\n", succs[i] + 1, tensu[succs[i]]);
	}
	
	return(0);
	
}
