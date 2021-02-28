#include <stdio.h>

main()
{
	int i = 1;
	int hap = 0;

	do
	{
		hap = hap + i;
		i++; // i는 1,2,3,4,5,6,7,8,9,10,11까지 증가
	} while (i <= 10); // i가 10보다 작거나 같은 동안 반복, 11이면 순환 탈출

	printf("hap = %d", hap); // hap = 55
}