// [���� 1] ����ü
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ����ü ����
struct student {
	int number;
	char name[10];
	double grade;
};


int main(void)
{
	struct student s; // ����ü ���� ����

	s.number = 20070001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);

	return 0;
}