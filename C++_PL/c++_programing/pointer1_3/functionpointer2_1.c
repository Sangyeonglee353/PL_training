/* ���� functionpointer2-1.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SelFunction(int s);
void Add(void);
void Min(void);

int main(void)
{
	int sel;

	while (1)
	{
		printf("���� : ����(1), ����(2), ����(3) ");
		scanf("%d", &sel);
		if (sel == 3)
			break;
		SelFunction(sel);
	}
	printf("���α׷��� ���� �Ǿ����ϴ�. \n");

	return 0;
}


void SelFunction(int s)
{
	void (*fPtr)(void);
	if (s == 1)
		fPtr = Add;
	else
		fPtr = Min;

	fPtr();    // �� �κ��� �ǹ̴�?  �� �κ��� ���ٸ�?
}

void Add(void)
{
	int a, b;
	printf("������ ���� �ΰ��� ���� �Է� : ");
	scanf("%d %d", &a, &b);
	printf("���� ��� : %d \n\n", a + b);
}
void Min(void)
{
	int a, b;
	printf("������ ���� �ΰ��� ���� �Է� : ");
	scanf("%d %d", &a, &b);
	printf("���� ��� : %d \n\n", a - b);
}

