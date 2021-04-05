#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int sum,i,a;
	sum = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}