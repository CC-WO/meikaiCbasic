//������str��no�񂾂��A�����ĕ\������֐����쐬����

#include <stdio.h>

void put_stringn(const char str[], int no)
{
	int i = 0;

	for (i = 0; i < no; i++){
		printf("%s", str);
	}
}

int main(void)
{
	char st[100];
	int n;

	printf("���������͂��Ă�������:");
	scanf_s("%s", st);

	printf("�o�͉񐔂���͂��Ă�������:");
	scanf_s("%d", &n);

	put_stringn(st, n);

	return(0);
}