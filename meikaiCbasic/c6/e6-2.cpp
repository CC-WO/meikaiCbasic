//�O��int�^�����̍ŏ��l��Ԃ��֐����쐬����

#include <stdio.h>

int minof(int ta, int tb, int tc)
{
	int x, y;

	x = (ta < tb) ? ta : tb;
	y = (tc < x) ? tc : x;

	return(y);

}

int main(void)
{
	int a, b, c;

	printf("����1:");	scanf_s("%d", &a);
	printf("����2:");	scanf_s("%d", &b);
	printf("����3:");	scanf_s("%d", &c);

	printf("�ŏ��l��:%d\n", minof(a, b, c));



}