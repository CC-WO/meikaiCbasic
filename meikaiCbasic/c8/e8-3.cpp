//type型の2つの値を交換する関数形式マクロを定義せよ
//たとえばint型の変数x,yの値が5,10であるとき、swap(int,x,y)を呼び出したあとは、x,yには10と5が格納されていなければならない

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