//type�^��2�̒l����������֐��`���}�N�����`����
//���Ƃ���int�^�̕ϐ�x,y�̒l��5,10�ł���Ƃ��Aswap(int,x,y)���Ăяo�������Ƃ́Ax,y�ɂ�10��5���i�[����Ă��Ȃ���΂Ȃ�Ȃ�

#include <stdio.h>

#define swap(type,a,b) c=0;c=a;a=b;b=c;

int main(void)
{
	int a = 5;
	int b = 10;
	int c = 0;

	swap(int, a, b);

	printf("a:%d b:%d\n", a, b);

	return(0);
}