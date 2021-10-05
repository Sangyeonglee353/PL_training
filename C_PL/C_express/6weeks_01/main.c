// [예제 1] 구조체
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 구조체 선언
struct student {
	int number;
	char name[10];
	double grade;
};


int main(void)
{
	struct student s; // 구조체 변수 선언

	s.number = 20070001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);

	return 0;
}