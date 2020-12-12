//文字列内の英字を大文字/小文字に変換

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

	printf("文字列を入力してください:");
	scanf_s("%s\n", str);

	str_toupper(str);
	printf("大文字:%s\n", str);

	str_tolower(str);
	printf("小文字:%s\n", str);

	return(0);
}