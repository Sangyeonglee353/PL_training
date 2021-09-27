// [실습문제 4-1] RemoveBlank, 문자열의 공백 제거하기
#include <stdio.h>

void removeBlank(char* str); // 공백을 제거한 문자열 출력 함수 선언

int main(void) {
	char str[100]; // 문자열을 입력 받아서 저장할 배열 선언
	gets(str);     // char[] 타입의 문자열에 stdin(키보드)로 문자열 입력 받음.
	removeBlank(str); // 공백 제거한 문자열 출력
	return 0;
}

void removeBlank(char* str) // 공백을 제거한 문자열 출력 함수 정의
{
	while(*str != '\0'){ // 문자열의 끝을 나타내는 NULL문자 나올때까지 반복
		if (*str != ' ') {      // 공백이 아닌 경우
			printf("%c", *str); // 해당 문자 출력
		}
		*str++; // 포인터 주소 증가
	}
	printf("\n"); // 줄바꿈
}