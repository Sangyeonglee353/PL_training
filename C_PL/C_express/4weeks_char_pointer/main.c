// 문자 포인터 = 문자열 상수
#include <stdio.h>

int main(void) {
	char* p = "HelloWorld";
	//p[0] = 'A'; // 에러 발생, 문자 포인터는 읽기만 가능하다.
	
	//printf("%c\n", p[0]);
	
	p = "Goodjob";
	printf("%s\n", p);

	return 0;
}