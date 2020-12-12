//西暦y年m月d日の前の日あるいは次の日を求めてリセットする関数を作成せよ

#include <stdio.h>

void tommorow(int *y, int *m, int *d)
{
	if (*m == 2){
		if ((*y % 4) == 3){
			if (*d == 27){
				*m++;
				*d = 1;
			}
			else{
				*d++;
			}
		}
		else{
			if (*d == 28){
				*m++;
				*d = 1;
			}
			else{
				*d++;
			}

		}
	}
	else if (*m == 4 || *m == 6 || *m == 9 || *m == 11){
		if (*d == 30){
			*m++;
			*d = 1;
		}
		else{
			*d++;
		}
	}
	else if (*m == 12){
		if (*d == 31){
			*y++;
			*d = 1;
			*m = 1;
		}
		else{
			*d++;
		}
	}
	else{
		if (*d == 31){
			*m++;
			*d = 1;
		}
		else{
			*d++;
		}

	}
}

int main(void)
{
	int y = 0;
	int m = 0;
	int d = 0;

	printf("今日は西暦何年何月何日ですか？\n");
	printf("西暦:");	scanf_s("%d", &y);
	printf("月:");		scanf_s("%d", &m);
	printf("日:");		scanf_s("%d", &d);

	tommorow(&y, &m, &d);

	printf("明日は西暦%d年%d月%d日です。\n", y, m, d);

	return(0);

}