/* ���� arraypointer1-2.c */
#include <stdio.h>

int test5_main(void)
{
	int arr[3] = { 0, 1, 2 };
	int* ptr;

	ptr = arr; // ����: arr = ptr; �����Ѱ�?

	printf("%d, %d, %d \n", ptr[0], ptr[1], ptr[2]);
	printf("%d, %d, %d \n", arr[0], arr[1], arr[2]);

	return 0;
}