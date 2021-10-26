// 배열 포인터 예제 1
#include <stdio.h>
int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int(*pa)[5];
	int i;
	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d \n", (*pa)[i]);

	printf("%d \n", pa); // [Q] 현재 pa의 값이 100이라고 할때 pa++는?
	pa++;
	printf("%d \n", pa);

	return 0;
}