//標準入力からの入力に現れた数字文字をカウントする

#include <stdio.h>

int main(void)
{
	int i, ch;
	int cnt[10] = { 0 };

	while (1){
		ch = getchar();
		if (ch == EOF)	break;

		switch (ch){
		case '0': cnt[0]++;	break;
		case '1': cnt[1]++;	break;
		case '2': cnt[2]++;	break;
		case '3': cnt[3]++;	break;
		case '4': cnt[4]++;	break;
		case '5': cnt[5]++;	break;
		case '6': cnt[6]++;	break;
		case '7': cnt[7]++;	break;
		case '8': cnt[8]++;	break;
		case '9': cnt[9]++;	break;
		}
	}
	/*
	if(ch >= '0' && ch <= '9')
		cnt[ch - '0']++;
	*/

	puts("数字文字の出現回数");
	for (i = 0; i < 10; i++)
		printf("'%d':%d\n", i, cnt[i]);

	return(0);
}