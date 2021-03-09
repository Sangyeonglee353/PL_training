// 난수 구하기(srand, rand)

#include <Stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
	int i;

	srand((unsigned)time(NULL)); // 난수 발생기를 초기화

	for (i = 0; i < 5; i++)
	{
		printf("난수: %d: %d \n", i, rand() % 20 + 1);
	}
}