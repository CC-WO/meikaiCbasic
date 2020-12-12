//要素数がnoであるint型の配列vcの並びを逆順にする関数

#include <stdio.h>

void rev_intary(int vc[], int no)
{
	int i;
	int tmp[] = { 0 };
	
	for (i = 0; i < no; i++){
		tmp[i] = vc[i];
		vc[no - i - 1] = tmp[i];
	}
}

int main(void)
{
	int n;
	int i;
	int ma[] = { 0 };

	printf("要素数:");	scanf_s("%d", &n);
	
	for (i = 0; i < n; i++){
		printf("要素[%d]:", i + 1);
		scanf_s("%d", &ma[i]);
	}
	
	rev_intary(ma, n);

	for (i = 0; i < n; i++)
		printf("要素[%d]:%d\n", i + 1, ma[i]);

	return(0);
		
}