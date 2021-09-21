// [�ǽ� ���� 3-2] : MgtGrade, 2���� �迭�� �̿��� �������� ���α׷�
#include <stdio.h>
#define STUDENT 4 // �л� ���� 4������ ����
#define CLASS 4 // ���� ���� 4���� ����
#define SIZE 5 // �л��� �����̸��� ũ�⸦ 5�� ����

void student_average(int(*score)[4], float (*student_avg)); // �л��� ��� ��� �Լ� ����
void class_average(int(*score)[4], float(*class_avg)); // ���� ��� ��� �Լ� ����

int main(void) {
	// �л����� ���� ������ ������ 2���� �迭 ����
	int score[STUDENT][CLASS] = { 0, };
	// �л��� ��� ����, ���� ������ ������ �迭 ����
	float student_avg[STUDENT] = { 0, };
	float class_avg[CLASS] = { 0, };
	// �л����� �̸��� ������ 2���� �迭 ����
	char name[STUDENT][SIZE] = { "ö��", "ö��", "����", "����" };
	// ���� �̸��� ������ 2���� �迭 ����
	char subject[CLASS][SIZE] = { "����", "����", "����", "����" };

	// �л����� ������ ���񺰷� �Է¹ޱ�
	for (int i = 0; i < STUDENT; i++) {
		printf("%s �л��� ������ �Է��ϼ���\n", name[i]);
		// ����, ����, ����, ���� ������ ������ �Է� �޴´�.
		for (int j = 0; j < CLASS; j++) {
			printf("%s ����: ", subject[j]);
			scanf("%d", &score[i][j]);
		}
	}

	student_average(score, student_avg); // �л��� ��� ���� ���
	class_average(score, class_avg);     // ���� ��� ���� ���

	printf("\n===�л��� ���� ���===\n");
	for (int i = 0; i < STUDENT; i++) {
		printf("%s: %.1f �� \n", name[i], student_avg[i]);
	}

	printf("\n===���� ���� ���===\n");
	for (int i = 0; i < CLASS; i++) {
		printf("%s: %.1f �� \n", subject[i], class_avg[i]);
	}
		
	return 0;
}

// �л��� ��� ��� �Լ� ����
void student_average(int(*score)[4], float (*student_avg))
{
	int total;

	for (int i = 0; i < STUDENT; i++) {
		total = 0;
		for (int j = 0; j < CLASS; j++) {
			total = total + score[i][j];
		}
		student_avg[i] = (float)total / CLASS;
	}
}

// ���� ��� ��� �Լ� ����
void class_average(int(*score)[4], float (*class_avg))
{
	int total;

	for (int i = 0; i < CLASS; i++) {
		total = 0;
		for (int j = 0; j < STUDENT; j++) {
			total = total + score[j][i];
		}
		class_avg[i] = (float)total / STUDENT;
	}
}