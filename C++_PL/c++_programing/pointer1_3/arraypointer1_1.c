/* ���� arraypointer1-1.c */

#include <stdio.h>

int test4_main(void)
{
	int a[5] = { 0, 1, 2, 3, 4 };

	printf("%d, %d \n", a[0], a[1]);
	printf("%d ����, %d ���� \n", &a[0], &a[1]);
	printf("�迭 �̸�: %d \n", a);

	return 0;
}