//�ȉ��̂悤�ɏ��������ꂽ������str���󕶎���ɂ���ɂ́A�ǂ̂悤�ȑ�����s���΂悢��������
//char str[] = "ABC";

#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[] = "ABC";

	for (i = 0; i < 4; i++)
		str[i] = '\0';

	printf("%s\n", str);

	return(0);
}