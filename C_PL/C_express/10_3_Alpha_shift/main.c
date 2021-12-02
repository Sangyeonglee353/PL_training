// [실습문제 10-3] Alpha_shift, 비트 연산자를 이용하여 대소문자 변경하기
#include<stdio.h>
#define SIZE 50 // 문자열의 크기 정의

int main(void) {
	char word[SIZE];
	int  i = 0;

	// 1. 문자열 입력받기
	printf("문자열을 입력하세요: ");
	scanf("%s", &word);
	
	// 2. 대소문자 변환
	while(word[i] != '\0'){
		word[i] = word[i] ^ 0x20;
		i++;
	}

	// 3. 최종 결과값 출력
	printf("결과 문자열: %s\n", word);

	return 0;
}