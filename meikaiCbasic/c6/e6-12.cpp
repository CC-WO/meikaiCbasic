//�ÓI�L������Ԃ��^����ꂽ�z��̑S�v�f��0�ŏ���������邱�Ƃ��m�F����v���O������������������

#include <stdio.h>

void static_s(void)
{
	int i;
	static int sx[5];

	for (i = 0; i < 5; i++){
		printf("sx[%d]=%d\n",i+1, sx[i]);
	}
}

int main(void)
{
	static_s();

	return(0);
}