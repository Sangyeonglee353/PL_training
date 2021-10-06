// [예제 6]: 구조체와 함수
#define _CRT_SECURE_NO_WANRINGS
#include <stdio.h>
#include <string.h>
struct student {
	int number;
	char name[20];
	double grade;
};

int equal(struct student s1, struct student s2);

int main(void) {
	struct student s1 = { 20070001, "Kim", 4.3 };
	struct student s2 = { 20070002, "Cho", 4.5 };
	int k;

	k = equal(s1, s2);

	if (k == 1)
		printf("Student1 is equal to Student2.\n");
	else
		printf("Student1 is not equal to Student2.\n");

	return 0;
}

int equal(struct student s1, struct student s2)
{
	if (strcmp(s1.name, s2.name) == 0)
		return 1;
	else
		return 0;
}