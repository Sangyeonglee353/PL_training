// ����ü�� �Լ����� ����ϱ�

#include <stdio.h>

typedef union tagVariable
{
	int i;
	double d;
} VA;

void print(VA* pva);

void main(void)
{
	VA va;

	print(&va);
}

void print(VA* pva)
{
	pva->i = 5;

	printf("pva->i ����ü�� ��: %d \n", pva->i);

	pva->d = 3.14;
	
	printf("pva->d ����ü�� ��: %f \n", pva->d);
	printf("pva->i ����ü�� ��: %d \n", pva->i);
}