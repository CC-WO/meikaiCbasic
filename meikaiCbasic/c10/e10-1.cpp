//����y�Nm��d���̑O�̓����邢�͎��̓������߂ă��Z�b�g����֐����쐬����

#include <stdio.h>

void tommorow(int *y, int *m, int *d)
{
	if (*m == 2){
		if ((*y % 4) == 3){
			if (*d == 27){
				*m++;
				*d = 1;
			}
			else{
				*d++;
			}
		}
		else{
			if (*d == 28){
				*m++;
				*d = 1;
			}
			else{
				*d++;
			}

		}
	}
	else if (*m == 4 || *m == 6 || *m == 9 || *m == 11){
		if (*d == 30){
			*m++;
			*d = 1;
		}
		else{
			*d++;
		}
	}
	else if (*m == 12){
		if (*d == 31){
			*y++;
			*d = 1;
			*m = 1;
		}
		else{
			*d++;
		}
	}
	else{
		if (*d == 31){
			*m++;
			*d = 1;
		}
		else{
			*d++;
		}

	}
}

int main(void)
{
	int y = 0;
	int m = 0;
	int d = 0;

	printf("�����͐���N���������ł����H\n");
	printf("����:");	scanf_s("%d", &y);
	printf("��:");		scanf_s("%d", &m);
	printf("��:");		scanf_s("%d", &d);

	tommorow(&y, &m, &d);

	printf("�����͐���%d�N%d��%d���ł��B\n", y, m, d);

	return(0);

}