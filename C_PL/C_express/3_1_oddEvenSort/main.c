// [실습 문제 3-1] : OddEvenSort, 10개의 정수를 입력받아 홀짝으로 배열 정렬하기
#include <stdio.h>
#define SIZE 10 // 배열의 크기 SIZE를 10으로 정의

void OddEvenSort(int* arr, int num); // 홀짝 정렬 함수 선언

int main(void) {
	int arr[SIZE] = { 0, }; // 배열을 선언하고 0으로 초기화
	int num; // 입력받은 값을 임시저장할 변수 num 선언

	// SIZE만 바꿔준다면 10개 이외의 숫자도 가능
	printf("%d개의 정수를 입력해주세요.\n", SIZE); 
	for (int i = 0; i < SIZE; i++) { // 사용자로부터 값 입력받아 정렬
		scanf("%d", &num);
		OddEvenSort(arr, num); // 홀짝 정렬하여 배열에 저장
	}
	
	printf("\n[배열 정렬 후]\n");
	for (int i = 0; i < SIZE; i++) { // 정렬된 값 출력
		printf("%d ", arr[i]);
	}
	return 0;
}

// 홀짝 정렬 함수 정의
void OddEvenSort(int* arr, int num)
{
	static indexOdd = 0; // 홀수 인덱스 선언
	static indexEven = SIZE - 1; // 짝수 인덱스 선언
	if (num % 2 != 0) { // 홀수이면 앞에서부터 저장
		arr[indexOdd] = num;
		indexOdd++; // 홀수 인덱스값 증가
	}
	else { // 짝수이면 뒤에서부터 저장
		arr[indexEven] = num;
		indexEven--; // 짝수 인덱스값 감소
	}
}