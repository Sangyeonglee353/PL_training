#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b;
	int num1, num2, num3, result;
	scanf("%d%d", &a, &b);
	num1 = a * ((b % 100) % 10);
	num2 = a * ((b % 100) / 10);
	num3 = a * (b / 100);
	result = a * b;
	printf("%d\n%d\n%d\n%d\n", num1, num2, num3, result);
}