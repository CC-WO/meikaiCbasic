//5�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��

#include <stdio.h>

int main(void)
{
	int uchida;
	int satoh;
	int sanaka;
	int hiraki;
	int masaki;
	int sum = 0;

	puts("�_������͂��Ă�������!");
	printf("1��:");	scanf_s("%d", &uchida);
	printf("2��:");	scanf_s("%d", &satoh);
	printf("3��:");	scanf_s("%d", &sanaka);
	printf("4��:");	scanf_s("%d", &hiraki);
	printf("5��:");	scanf_s("%d", &masaki);

	sum += uchida;
	sum += satoh;
	sum += sanaka;
	sum += hiraki;
	sum += masaki;

	printf("���v�_:%5d\n", sum);
	printf("���ϓ_:%5.1f\n", (double)sum / 5);

	return(0);

}