//���������̏o���񐔂��A*����ׂ��O���t�ŕ\��������̂��쐬����

#include <stdio.h>

void put_stars(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
		putchar('*');
}

int main(void)
{
	int i, ch;
	int cnt[10] = { 0 };

	while (1){
		ch = getchar();
		if (ch == EOF)	break;

		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;
	}

	puts("���������̏o����");
	for (i = 0; i < 10; i++){
		printf("'%d':", i);
		put_stars(cnt[i]);
		putchar('\n');
	}

	return(0);
}