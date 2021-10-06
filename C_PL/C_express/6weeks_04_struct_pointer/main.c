// [예제 4]: 구조체 포인터
// 포인터를 통한 구조체 참조
#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s = { 20070001, "홍길동", 4.3 };
	struct student* p;

	p = &s;

	printf("학번=%d 이름=%s 키=%f \n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 키=%f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번=%d 이름=%s 키=%f \n", p->number, p->name, p->grade);

	return 0;
}