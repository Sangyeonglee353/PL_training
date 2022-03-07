/* pointer1-2.c */
#include <stdio.h>

int test2_main(void)
{
	char c = 'a';
	int n = 7;
	double d = 3.14;

	int* pN = &n;
	char* pC = &c;
	double* pD = &d;

	printf("%d\n", *pN);
	printf("%c\n", *pC);
	printf("%f\n\n", *pD);

	printf("%d\n", pN);
	printf("%c\n", pC);
	printf("%f\n", pD);
}