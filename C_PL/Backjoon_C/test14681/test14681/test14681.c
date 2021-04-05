#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > 0 && b > 0)
	{
		printf("1");
	}
	else if(a < 0 && b >0)
	{
		printf("2");
	}
	else if(a < 0 && b < 0)
	{
		printf("3");
	}
	else if(a > 0 && b <0 )
	{
		printf("4");
	}
	else {
		printf("Áß¾Ó");
	}
	return 0;
}