#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int score[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		score[i] = rand() % 100;
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("score[%d]=%d\n", i, score[i]);
	}

	return 0;
}