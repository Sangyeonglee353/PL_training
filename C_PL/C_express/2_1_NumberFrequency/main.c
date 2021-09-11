// [실습 문제 2-1] NumberFrequency, 최대 빈도수 구하기 
#include <stdio.h>
#define TIMES 20 // 정수 입력 횟수 정의

void NumberFrequency(int* arr, int size); // 최대 빈도수 계산 함수 선언

int main(void) {

	int arr[10] = { 0, }; // 빈도수 저장 배열
	int cnt = 1; // 정수 입력 횟수 
	int num;     // 입력 받은 값

	while (cnt <= TIMES) { // 정수 입력 횟수만큼 반복
		scanf("%d", &num); // 정수 입력 받기
		if ((num >= 0) && (num < 10)) {
			++arr[num]; // 숫자별 빈도 수 누적
			cnt++; // 정수 입력 횟수 증가
		}
		else { // 정수 범위를 벗어날 시 오류문 출력
			printf("잘못된 입력입니다. 0~9 사이의 정수를 입력해주세요: ");
		}
	}
	// 최대 빈도 숫자 계산
	NumberFrequency(arr, 10);
	return 0;
}
// 최대 빈도수 계산 함수 정의
void NumberFrequency(int* arr, int size) {
	int MaxNum = 0;
	int MaxFrequency = arr[0];
	// 최대 빈도 숫자 및 횟수 계산
	for (int i = 0; i < size; i++){ 
		if (MaxFrequency < arr[i]) {
			MaxFrequency = arr[i];
			MaxNum = i;
		}
	}
	// 최대 빈도 숫자 및 횟수 출력
	printf("최대 빈도 숫자: %d\n최대 빈도 횟수: %d", MaxNum, MaxFrequency);
}
