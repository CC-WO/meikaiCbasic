//���ʂ�G�߂Ȃǂ�\���񋓑̂����R�ɒ�`���A�����p�����v���O�������쐬����B
//�f�o�b�O�G���[

#include <stdio.h>

enum season {Spring,Summer,Autumn,Winter,Invalid};

void spring(void)
{
	puts("�t�ł��B");
}

void summer(void)
{
	puts("�Ăł��B");
}

void autumn(void)
{
	puts("�H�ł��B");
}

void winter(void)
{
	puts("�~�ł��B");
}

enum season select(void)
{
	int tmp;

	do{
		printf("0�c�t 1�c�� 2�c�H 3�c�~ 4�c�I��");
		scanf_s("%d", &tmp);
	} while (tmp < Spring || tmp >Invalid);
	return(tmp);
}

int main(void)
{
	enum season selected;

	do{
		switch (selected = select()){
		case Spring:spring();	break;
		case Summer:summer();	break;
		case Autumn:autumn();	break;
		case Winter:winter();	break;
		}
	} while (selected != Invalid);

	return(0);
}