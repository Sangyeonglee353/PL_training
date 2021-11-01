// [실습문제 9-2] Caculator, 명령어줄 전달인자 프로그램을 이용한 계산기 프로그램
#include <stdio.h>
#include <string.h> // strcmp()을 위해 삽입
#include <stdlib.h> // atoi()을 위해 삽입
#include <ctype.h> // isdigit()을 위해 삽입

void Add(int x, int y); // 더하기 함수 선언
void Sub(int x, int y); // 빼기 함수 선언
void Mul(int x, int y); // 곱하기 함수 선언
void Div(int x, int y); // 나누기 함수 선언

int main(int argc, char* argv[]) {
	int x, y;

	if (argc == 5) // 인수의 개수가 맞을 때
	{
		x = atoi(argv[3]); // 4번째 인수를 정수로 변환
		y = atoi(argv[4]); // 5번째 인수를 정수로 변환

		if (strcmp(argv[1], "-i") == 0) { // 2번째 인수가 "-i" 인지 검사
			if (strcmp(argv[2], "a") == 0) { // 3번째 인수가 "a" 인지 검사
				// 4번째, 5번째 인수가 정수인지 검사
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Add(x, y); // 4번째, 5번째 인수가 정수라면
				}
				else { // 4번째, 5번째 인수가 정수가 아니라면
					printf("계산할 숫자를 잘못 입력했습니다. 다시 실행하세요.\n");
				}
			}
			else if (strcmp(argv[2], "s") == 0) { // 3번째 인수가 "a" 인지 검사
				// 4번째, 5번째 인수가 정수인지 검사
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Sub(x, y); // 4번째, 5번째 인수가 정수라면
				}
				else { // 4번째, 5번째 인수가 정수가 아니라면
					printf("계산할 숫자를 잘못 입력했습니다. 다시 실행하세요.\n");
				}
			}
			else if (strcmp(argv[2], "m") == 0) { // 3번째 인수가 "a" 인지 검사
				// 4번째, 5번째 인수가 정수인지 검사
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Mul(x, y); // 4번째, 5번째 인수가 정수라면
				}
				else { // 4번째, 5번째 인수가 정수가 아니라면
					printf("계산할 숫자를 잘못 입력했습니다. 다시 실행하세요.\n");
				}
			}
			else if (strcmp(argv[2], "d") == 0) { // 3번째 인수가 "a" 인지 검사
				// 4번째, 5번째 인수가 정수인지 검사
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Div(x, y); // 4번째, 5번째 인수가 정수라면
				}
				else { // 4번째, 5번째 인수가 정수가 아니라면
					printf("계산할 숫자를 잘못 입력했습니다. 다시 실행하세요.\n");
				}
			}
			else { // 3번째 인수 Option을 잘못 입력한 경우
				printf("계산기 Option(a(+), s(-), m(*), d(/))을 잘못 입력했습니다. 다시 실행하세요.\n");
			}
		}
		else { // 2번째 인수 -i를 잘못 입력한 경우
			printf("Option -i를 잘못 입력했습니다. 다시 실행하세요.\n");
		}
	}
	else { // 인수의 개수가 5가 아닌 경우
		printf("인수의 개수가 맞지 않습니다.\n");
		printf("[실행예시] Calculator -i a 2 5\n");
	}
	return 0;
}

void Add(int x, int y) // 더하기 함수 정의
{
	printf("%d + %d = %d 입니다.\n", x, y, x + y);
}

void Sub(int x, int y) // 빼기 함수 정의
{
	printf("%d - %d = %d 입니다.\n", x, y, x - y);
}

void Mul(int x, int y) // 곱하기 함수 정의
{
	printf("%d * %d = %d 입니다.\n", x, y, x * y);
}

void Div(int x, int y) // 나누기 함수 정의
{
	if (y != 0) {
		printf("%d / %d = %.2f 입니다.\n", x, y, (float)x / (float)y);
	}
	else {
		printf("0으로 나눌 수는 없습니다.\n");
	}
}
