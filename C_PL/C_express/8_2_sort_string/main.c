// [실습문제 8-2]: sort_string, 문자열 정렬하기
#include <stdio.h>
#include <string.h>

void sort_string(char* s[], int size); // 문자열 배열 정렬 함수 선언
void print_string(char* s[], int size); // 문자열 배열 출력 함수 선언

int main(void) {
	
	char* s[] = { "mycopy", "src", "dst" };
	int size;

	size = sizeof(s) / sizeof(s[0]);

	printf("=====함수 실행 전=====\n");
	print_string(s, size);

	sort_string(s, size); // 문자열 오름차순 정렬

	printf("=====함수 실행 후=====\n");
	print_string(s, size);

	return 0;
}

// 문자열 정렬 함수 정의
void sort_string(char* s[], int size)
{
	char* temp_str;

	// 버블 정렬을 이용한 오름차순 정렬
	for (int step = 0; step < size-1; step++){
		for (int i = 0; i < size - 1 - step; i++) {
			// strcmp(), 0: 동일, 1: 앞수가 큰 경우, -1: 뒷수가 큰 경우
			if (strcmp(s[i], s[i + 1]) > 0) {
				temp_str = s[i];
				s[i] = s[i + 1]; // 문자열이 아닌 문자열 배열이므로
				                 // strcpy(s[i],s[i+1]); 대신 '=' 등호 연산자를 사용한다.
				s[i+1] = temp_str;
			}
		}
	}
}

// 문자열 출력 함수 정의
void print_string(char* s[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%s ", s[i]);
	}
	printf("\n\n");
}