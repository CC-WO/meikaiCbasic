//�x���n�񂾂�������x��

#include <stdio.h>

void alert(int no)
{
	while (no-->0)
	putchar('\a');
}

int main(void)
{
	int n;

	printf("�x���:");	scanf_s("%d", &n);

	alert(n);

	return(0);

}