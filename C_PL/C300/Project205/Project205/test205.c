// 1~100���� Ȧ���� �� ���ϱ�

#include <stdio.h>

void main(void)
{
	int i, hap = 0;

	for (i = 0; i <= 100; i++)
	{
		if (i % 2)
		{
			hap += i;
		}
	}

	printf("1~100������ Ȧ���� ��: %d \n", hap);
}