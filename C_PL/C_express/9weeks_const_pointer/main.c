// 예제 6: const 포인터
#include <stdio.h>

int main(void) {
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools";
	const char* p = s;
	char* const q = s;

	// p[3] = 'a'; // p가 가리키는 곳의 내용을 변경할 수 없다.

	p = t; // 하지만 p는 변경이 가능하다.

	q[3] = 'a'; // q가 가리키는 곳의 내용은 변경할 수 있다.

	// q = t; // 하지만 q는 변경이 불가능하다.

	return 0;
}