// ���� �Է¹޾� Ȧ��/¦�� �����ϱ�(%)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int num;

	printf("���ڸ� �Է��ϼ��� :");

	scanf("%d", &num);

	if (num % 2 == 1)
	{
		printf("%d�� Ȧ�� �Դϴ�. \n", num);
	}
	else
	{
		printf("%d�� ¦���Դϴ�. \n", num);
	}
}