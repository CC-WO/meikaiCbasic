//�W�����͂Ɍ��ꂽ�s�����J�E���g����v���O�������쐬����

#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;

	while ((ch = getchar()) != EOF){
		cnt++;
		printf("�s��:%d\n", cnt-1);
	}

	return(0);
}