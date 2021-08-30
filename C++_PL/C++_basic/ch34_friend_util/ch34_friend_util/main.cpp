#include "time.h"

int main() {
	// operator*
	// 하나의 객체와 정수형(int) 타입을 곱하는 형태
	// 오버로딩으로 해결 불가
	// 따라서 friend 함수를 사용하여 해결

	Time t1(1, 20);
	Time t2;

	// t2 = operator*(3, t1);
	// 아래의 경우 매개변수의 순서가 다르면 에러가 발생한다.
	// 해당 에러 해결을 위해 frined 함수대신 멤버 함수를 사용한다.
	// t2 = 3 * t1;
	t2 = t1 * 3;
	t2.show();

	return 0;
}