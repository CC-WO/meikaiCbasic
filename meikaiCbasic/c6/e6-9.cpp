//要素数がnoであるint型の配列v2の並びを逆順にしたものを配列v1に格納する関数

#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int no)
{
	int i;

	for (i = 0; i < no; i++){
		v1[i] = v2[no - i - 1];
	}
}

int main(void)
{
	int i;
	int n = 0;
	int m1[] = { 0 };
	int	m2[] = { 0 };
		
	printf("要素数:");	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		printf("要素[%d]", i + 1);
		scanf_s("%d", &m2[i]);

	}

	intary_rcpy(m1, m2, n);

	for (i = 0; i < n; i++){
		printf("要素[%d]:%d\n", i + 1, m1[i]);
	}

}