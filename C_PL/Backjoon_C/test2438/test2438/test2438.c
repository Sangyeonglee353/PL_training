#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i, a, T;
	scanf("%d", &T);
	for (i = 1; i <= T; i++)
	{
		for (a = 1; a <= i; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}