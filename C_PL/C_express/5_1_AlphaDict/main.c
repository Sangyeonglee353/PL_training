// [실습문제 5-1] AlphaDict, 문자열 순서대로 정렬하기
#include <stdio.h>
#include <string.h>
#define SIZE 100

// 문자열 출력 함수 선언
void alphaPrint(char* str1, char* str2, char* str3);
int main(void) {
	char str1[SIZE]; // 첫번째 문자열 변수 선언
	char str2[SIZE]; // 두번째 문자열 변수 선언
	char str3[SIZE]; // 세번재 문자열 변수 선언
	int result; // 문자열 비교값 저장 변수 선언

	// 문자열 입력
	printf("1번째 문자열을 입력하시오: ");
	gets_s(str1, sizeof(str1));
	printf("2번째 문자열을 입력하시오: ");
	gets_s(str2, sizeof(str2));
	printf("3번째 문자열을 입력하시오: ");
	gets_s(str3, sizeof(str3));

	// 문자열 비교 후 정렬된 문자열 출력
	result = strcmp(str1, str2);
	if (result >= 0) { // str1이 str2보다 크거나 같은 경우
		result = strcmp(str1, str3);
		if (result >= 0) { // str1이 str3보다 크거나 같은 경우
			result = strcmp(str2, str3);
			if (result >= 0) { // str2가 str3보다 크거나 같은 경우
				alphaPrint(str1, str2, str3);
			}
			else { // str2가 str3보다 작은 경우
				alphaPrint(str1, str3, str2);
			}
		}
		else { // str1이 str3보다 작은 경우
			alphaPrint(str3, str1, str2);
		}
	}
	else { // str1이 str2보다 작은 경우
		result = strcmp(str1, str3);
		if (result >= 0) { // str1이 str3보다 크거나 같은 경우
			alphaPrint(str2, str1, str3);
		}
		else { // str1이 str3보다 작은 경우
			result = strcmp(str2, str3);
			if (result >= 0) { // str2가 str3보다 크거나 같은 경우
				alphaPrint(str2, str3, str1);
			}
			else { // str2가 str3보다 작은 경우
				alphaPrint(str3, str2, str1);
			}
		}
	}
	return 0;
}

// 문자열 출력 함수 정의
void alphaPrint(char* str1, char* str2, char* str3)
{
	printf("정렬된 문자열: %s%s%s\n", str1, str2, str3);
}