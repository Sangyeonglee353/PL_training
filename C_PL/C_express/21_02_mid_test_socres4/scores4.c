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
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < STUDENT; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENT;
	printf("성적 평균 = %d\n", average);

	return 0;
}