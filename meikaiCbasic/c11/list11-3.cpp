//������̑���i�H�j
//�r���h�G���[�F�������q�������邱�Ƃ͏o���Ȃ�

#include <stdio.h>

int main(void)
{
	char str[] = "ABC";
	char *ptr = "123";

	str = "DEF";
	ptr = "456";

	printf("str = \"%s\"\n", str);
	printf("ptr = \"%s\"\n", ptr);
	
	return(0);
}