//�ǂݍ��񂾔񕉂̐����l���t���ɕ\��

#include <stdio.h>

int scan_uint(void)
{
	int tmp;

	do{
		printf("�񕉂̐�������͂��Ă�������:");
		scanf_s("%d", &tmp);
		if (tmp < 0)
			puts("\a���̐�����͂��Ă��������B");
	} while (tmp < 0);

	return(tmp);
}

int rev_int(int num)
{
	int tmp = 0;

	if (num>0){
		do{
			tmp = tmp * 10 + num % 10;
			num /= 10;
		} while (num > 0);
	}

	return(tmp);
}

int main(void)
{
	int nx = scan_uint();

	printf("���]�����l��%d�ł��B\n", rev_int(nx));

	return(0);

}