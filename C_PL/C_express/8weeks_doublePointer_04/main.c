// 예제 5: 포인터의 포인터
#include <stdio.h>

void change(char**); // 포인터의 포인터를 매개변수로 받는 함수 선언

int main() {
	char* cp[3]; // char형의 포인터 배열 선언

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

	change(cp);
	//cpp = cp; // cpp = &cp[0]와 같은 표현이다.

	printf("change() 함수를 호출한 후의 값들 \n\n");

	printf("cp[0]가 가리키는 주소값: %p \n", cp[0]);
	printf("cp[1]가 가리키는 주소값: %p \n", cp[1]);
	printf("cp[2]가 가리키는 주소값: %p \n", cp[2]);

	printf("cp가 가리키는 주소값: %p \n", cp);
	printf("cp[0]의 주소: %p \n", &cp[0]);
	printf("cp[1]의 주소: %p \n", &cp[1]);
	printf("cp[2]의 주소: %p \n", &cp[2]);

	printf("%s %s %s \n\n", cp[0], cp[1], cp[2]);

	return 0;
}

void change(char**temp) // void change(char *temp[])도 가능
{
	*temp++ = "한국과학기술원";
	*temp++ = "전자전산학부";
	*temp = "전기및전자공학과";
}
