//atoi関数の動作確認

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "12345";

	printf("str=\"%s\"\n", str);
	printf("atoi(str) = %d\n", atoi(str));

	return(0);
}