//警報をn回だけ発する警報

#include <stdio.h>

void alert(int no)
{
	while (no-->0)
	putchar('\a');
}

int main(void)
{
	int n;

	printf("警報回数:");	scanf_s("%d", &n);

	alert(n);

	return(0);

}