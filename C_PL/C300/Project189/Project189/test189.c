// ���� ���ϱ�(srand, rand)

#include <Stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
	int i;

	srand((unsigned)time(NULL)); // ���� �߻��⸦ �ʱ�ȭ

	for (i = 0; i < 5; i++)
	{
		printf("����: %d: %d \n", i, rand() % 20 + 1);
	}
}