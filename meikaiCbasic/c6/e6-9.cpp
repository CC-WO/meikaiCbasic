//—v‘f”‚ªno‚Å‚ ‚éintŒ^‚Ì”z—ñv2‚Ì•À‚Ñ‚ğ‹t‡‚É‚µ‚½‚à‚Ì‚ğ”z—ñv1‚ÉŠi”[‚·‚éŠÖ”

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
		
	printf("—v‘f”:");	scanf_s("%d", &n);

	for (i = 0; i < n; i++){
		printf("—v‘f[%d]", i + 1);
		scanf_s("%d", &m2[i]);

	}

	intary_rcpy(m1, m2, n);

	for (i = 0; i < n; i++){
		printf("—v‘f[%d]:%d\n", i + 1, m1[i]);
	}

}