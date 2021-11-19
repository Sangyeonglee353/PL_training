// [실습과제 10-2] GET_BIT, 정수값 비트 이동하여 출력하기
#include <stdio.h>
#include <stdbool.h>
#define GET_BIT(n, pos) (((n) >> (pos)) & 0x01) // 변수 n에서 pos번째 비트의 값을 반환

void Display_bit(int n); // 32비트 출력 함수 선언
int input_num_shift();   // 쉬프트 거리 입력 함수 선언
int shift_num(int num, int direction, int size); // 쉬프트 계산 함수 선언

int main(void)
{
	int num;        // 입력받은 숫자 변수
	int direction;  // 쉬프트 방향 변수
	int num_shift;  // 쉬프트 거리 변수
	int num_result; // 쉬프트 결과 숫자 변수

	bool control = true;

	// #1. 초기값 입력받아 출력
	printf("정수값을 입력하세요: ");
	scanf("%d", &num);
	printf("이동 전(정수값): ");
	Display_bit(num);

	// #2. 쉬프트 입력
	while (control) {
		printf("왼쪽 이동은 0을, 오른쪽 이동은 1을 입력하세요: ");
		scanf("%d", &direction);

		switch (direction) {
		case 0: // 왼쪽 이동
			num_shift = input_num_shift();
			num_result = shift_num(num, direction, num_shift);
			printf("이동 후(정수값): ");
			Display_bit(num_result);
			control = false;
			break;
		case 1: // 오른쪽 이동
			num_shift = input_num_shift();
			num_result = shift_num(num, direction, num_shift);
			printf("이동 후(정수값): ");
			Display_bit(num_result);
			control = false;
			break;
		default:
			printf("값을 잘못 입력하셨습니다. \n");
		}
	}
	
	return 0;
}

// 32비트 출력 함수 정의
void Display_bit(int n) 
{
	int i;
	for (i = 31; i >= 0; i--)
	{
		if (i % 8 == 0) { // 8비트마다 띄어쓰기
			if (GET_BIT(n, i)) {
				printf("1 ");
			}
			else {
				printf("0 ");
			}
		}
		else {
			if (GET_BIT(n, i)) {
				printf("1");
			}
			else {
				printf("0");
			}
		}
	}
	printf("\n");
}

// 쉬프트 거리 입력 함수 정의
int input_num_shift()
{
	int numShift;
	printf("이동시킬 쉬프트 거리: ");
	scanf("%d", &numShift);

	return numShift;
}

// 쉬프트 계산 함수 정의
int shift_num(int num, int direction, int size)
{
	int result;
	if (direction == 0) {
		result = num << size;
	}
	else if (direction == 1) {
		result = num >> size;
	}
	
	return result;
}
