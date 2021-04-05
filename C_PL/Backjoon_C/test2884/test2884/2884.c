#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int H, M, Z;
	scanf("%d %d", &H, &M);
	
	Z = H * 60 + M - 45;

	if (Z < 0)
	{
		Z = Z + 24 * 60;
	}

	H = Z / 60;
	M = Z % 60;

	printf("%d %d", H, M);

	return 0;
}