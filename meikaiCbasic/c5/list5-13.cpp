//�_��(0~100)��ǂݍ���ŕ��z��\��

#include <stdio.h>

#define NUMBER 80	//�l���̏��

int main(void)
{
	int i, j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };

	printf("�l������͂��Ă�������:");
	do{
		scanf_s("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a�v[1�ȏ�%d�ȉ�]:", NUMBER);
	} while (num < 1 || num > NUMBER);

	puts("�_������͂��Ă��������B");
	for (i = 0; i < num; i++){
		printf("%2d��:", i + 1);
		do{
			scanf_s("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a�v[0�ȏ�100�ȉ�]:");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("\n�� ���z�O���t ��");
	printf("      100:");
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--){
		printf("%3d - %3d:", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return(0);
	
}