#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INCREMENT 3 // �� ���� ������Ű�� ũ��

double* scores = NULL;
int add_score(double new_score)
{
	static int limit = 0; // ���� ���� �迭�� �ִ� ũ��
	static int count = 0; // ���� ���� �迭�� ũ��

	if (count < limit) {
		scores[count++] = new_score;
	}
	else {
		int new_limit = limit + INCREMENT;
		double* new_array = realloc(scores, new_limit * sizeof(double));
		if (new_array == NULL) {
			fprintf(stderr, "�޸� �Ҵ� ����\n");
		}
		else {
			scores = new_array;
			limit = new_limit;
			scores[count++] = new_score;
		}
		return count;
	}
}

int main(void)
{
	int i, size;
	double value, total = 0.0;
	size = 10;
	for (i = 0; i < size; i++)
	{
		printf("����: ");
		scanf("%lf", &value);
		add_score(value);
	}

	for (i = 0; i < size; i++) {
		total += scores[i];
	}

	printf("���: %f\n", total / size);
	free(scores);
	return 0;
}