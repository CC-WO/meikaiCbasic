//����n�̊K���Ԃ��֐����ċN��p�����ɒ�`����

#include <stdio.h>

int fact(int n)
{
	int sum = 1;

	for (; n > 0; n--)
		sum *= n;

	return(sum);
}

int main(void)
{
	int na;

	printf("��������͂��Ă�������:");
	scanf_s("%d",&na);

	printf("�K���%d\n", fact(na));

	return(0);

}