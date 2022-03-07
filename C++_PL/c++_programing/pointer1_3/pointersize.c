#include <stdio.h>

int test10_main(void)
{
	int arr[5];
	int* pArr = arr;

	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof(pArr));
	return 0;
}
