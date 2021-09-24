// getchar()와 getch() 차이 확인하기
#include <stdio.h>

int main(void) {
	int ch; // char형으로 해도 상관없음

	//ch = getchar(); // 버퍼를 사용해서 엔터 후 입력
	ch = getch(); // 버퍼를 사용하지 않아서 엔터없이 바로 입력

	printf("ch = %c \n", ch);

	return 0;
}