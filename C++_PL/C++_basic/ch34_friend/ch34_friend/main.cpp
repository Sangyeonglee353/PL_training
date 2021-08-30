#include "time.h"

int main() {
	// C++ friend
	// 이항 연산자: 두 개의 피연산자를 요구하는 연산자
	/*Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();
	
	Time total;*/
	// operator+
	// 두 개의 객체를 더하는 형태
	// total = day1.sum(day2);
	// total = day1.operator+(day2);
	// total = day1 + day2;
	// total.show();

	// operator*
	// 하나의 객체와 정수형(int) 타입을 곱하는 형태
	// 오버로딩으로 해결 불가
	// 따라서 friend 함수를 사용하여 해결

	Time t1(1, 20);
	Time t2;

	// 아래의 경우 매개변수의 순서가 다르면 에러가 발생한다.
	// t2 = 3 * t1;
	t2 = operator*(3, t1);
	t2.show();
	
	return 0;
}