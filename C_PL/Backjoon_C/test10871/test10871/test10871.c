#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i, N, X, a;
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a);

		if (X > a)
			printf("%d ", a);
	}
	return 0;
}