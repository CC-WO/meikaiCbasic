//5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��

#include <stdio.h>

int main(void)
{
	int i;
	int tensu[5];
	int sum = 0;

	puts("�_������͂��Ă�������");
	for (i = 0; i < 5; i++){
		printf("%d��", i + 1);
		scanf_s("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_:%5d\n", sum);
	printf("���ϓ_:%5.1f\n", (double)sum / 5);

	return(0);

}