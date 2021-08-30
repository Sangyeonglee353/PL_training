#include "time.h"

int main() {
	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;
	// 원래 형태total = day1.sum(day2);
	// 연산자 오버로딩 사용법 1
	total = day1.operator+(day2);
	total.show();

	Time total2;
	// 연산자 오버로딩 사용법 2
	total2 = day1 + day2;
	total2.show();

	return 0;
}