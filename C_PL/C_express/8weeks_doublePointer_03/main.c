// 예제 4: 포인터의 포인터
#include <stdio.h>

int main() {
	char* cp[3], ** cpp; // char형의 포인터 배열과
	                     // 포인터의 포인터 선언
	cp[0] = "한국기술교육대학교";
	cp[1] = "인터넷미디어공학부";
	cp[2] = "멀티미디어전공";

	printf("cp[0]가 가리키는 주소값: %p \n", cp[0]);
	printf("cp[1]가 가리키는 주소값: %p \n", cp[1]);
	printf("cp[2]가 가리키는 주소값: %p \n", cp[2]);

	printf("cp가 가리키는 주소값: %p \n", cp);
	printf("cp[0]의 주소: %p \n", &cp[0]);
	printf("cp[1]의 주소: %p \n", &cp[1]);
	printf("cp[2]의 주소: %p \n", &cp[2]);

	printf("%s %s %s \n\n", cp[0], cp[1], cp[2]);

	cpp = cp; // cpp = &cp[0]와 같은 표현이다.

	printf("cpp의 주소값: %p \n", &cpp);
	printf("cpp가 가리키는 주소값: %p \n", cpp);
	printf("%s %s %s \n", cpp[0], cpp[1], cpp[2]);
	printf("%s %s %s \n", *cpp, *(cpp+1), *(cpp+2));

	return 0;
}