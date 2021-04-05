#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i, a, b, T;
	scanf("%d", &T);
	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}