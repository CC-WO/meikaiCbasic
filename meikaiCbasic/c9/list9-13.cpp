//��������̉p����啶��/�������ɕϊ�

#include <ctype.h>
#include <stdio.h>

void str_toupper(char str[])
{
	unsigned i = 0;
	while (str[i]){
		str[i] = toupper(str[i]);
		i++;
	}
}

void str_tolower(char str[])
{
	unsigned i = 0;
	while (str[i]){
		str[i] = tolower(str[i]);
		i++;
	}
}

int main(void)
{
	char str[100];

	printf("���������͂��Ă�������:");
	scanf_s("%s\n", str);

	str_toupper(str);
	printf("�啶��:%s\n", str);

	str_tolower(str);
	printf("������:%s\n", str);

	return(0);
}