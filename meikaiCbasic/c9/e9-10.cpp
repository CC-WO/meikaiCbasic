//文字列str内のすべての数字文字を削除する関数を作成せよ

#include <stdio.h>

void del_digit(char str[])
{
	int ma[] = { 0 };
	unsigned i = 0;

	while (str[i]){
		if (str[i] >= '0'&& str[i] <= '9')
			str[i] = '\0';
		i++;
	}
}

int main(void)
{
	char sa[100];

	printf("文字列を入力してください:");
	scanf_s("%s", sa);

	del_digit(sa);

	printf("%s\n", sa);

	return(0);


}