// 포인터와 배열의 관계 2
#include <stdio.h>
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", a);
	printf("a+1= %u\n", a + 1);
	printf("*a = %d\n", *a); // *a=a[0]
	printf("*(a+1) = %d\n", *(a + 1)); // *(a+1)=a[1]
	printf("*a+1 = %d\n", *a + 1);

	return 0;
}