//�I�΂ꂽ�����̖�����\��
//�r���h�G���[

#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

void dog(void)
{
	puts("���������I");
}

void cat(void)
{
	puts("�ɂ�`���I");
}

void monkey(void)
{
	puts("�L�b�L�b�I");
}

enum animal select(void)
{
	int tmp;

	do{
		printf("0�c�� 1�c�L 2�c�� 3�c�I��:");
		scanf_s("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return(tmp);
}

int main(void)
{
	enum animal selected;

	do{
		switch (selected = select()){
		case Dog:		dog();		break;
		case Cat:		cat();		break;
		case Monkey:	monkey();	break;
		}
	} while (selected != Invalid);

	return(0);
}