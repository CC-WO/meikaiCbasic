/*
２つの値xとyの大きい方の値を返す関数形式マクロは以下のように定義される
#define max(x, y) (((x) > (y) ? (x) : (y))
このマクロを利用して、4つの値a,b,c,dの最大値を求める
max(max(a,b),max(c,d))
及び
max(max(max(a,b),c),d)
がどのように展開されるかを示し、考察を加えよ
*/

#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a1 = 1, b1 = 2, c1 = 3, d1 = 4;
	int a2 = 1, b2 = 2, c2 = 3, d2 = 4;

	printf("%d\n", max((a1, b1), max(c1, d1)));
	printf("%d\n", max(max(max(a2, b2), c2), d2));

	return(0);

}

//結果は同じ？
