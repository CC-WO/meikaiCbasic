//��������̐����������J�E���g����

#include <stdio.h>

void str_dcount(const char str[], int cnt[])
{
	unsigned i = 0;
	while (str[i]){
		if (str[i] >= '0' && str[i] <= 9)
			cnt[str[i] - '0']++;
		i++;
	}
}

int main(void)
{
	int i;
	int dcnt[10] = { 0 };
	char str[100];

	printf("���������͂��Ă�������:");
	scanf_s("%s", str);

	str_dcount(str, dcnt);

	puts("���������̏o����");
	for (i = 0; i < 10; i++){
		printf("'%d':%d\n", i, dcnt[i]);
	}
	
	return(0);

}