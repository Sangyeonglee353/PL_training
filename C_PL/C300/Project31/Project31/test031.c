#include <stdio.h>

main()
{
	char i;
	int j;
	double k;

	printf("%d \n", sizeof(i)); // 1
	printf("%d \n", sizeof(j)); // 4(64비트 컴퓨터에서는 8임)
	printf("%d \n", sizeof(k)); // 8
}