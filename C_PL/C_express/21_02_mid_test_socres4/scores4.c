#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STUDENT 5

int main(void)
{
	int scores[STUDENT];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENT; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < STUDENT; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENT;
	printf("���� ��� = %d\n", average);

	return 0;
}