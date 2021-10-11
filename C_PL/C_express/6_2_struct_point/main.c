// [실습문제 2] Struct_point, 좌표 일치 여부와 사분면 위치 출력하기
#include <stdio.h>

int equal(struct point p1, struct point p2); // 좌표 일치/불일치 비교 함수 선언
int quadrant(struct point p); // 사분면 위치 반환 함수 선언
void printQuadrant(struct point p, int quadrant); // 사분면 위치 출력 함수 선언

struct point { // 구조체 선언
	int x, y;
};

int main(void) {
	struct point p1, p2; // 구조체 변수 선언

	// 입력부: 좌표 값 
	printf("첫 번째 좌표를 입력해주세요(x, y): ");
	scanf("%d, %d", &p1.x, &p1.y);
	printf("두 번째 좌표를 입력해주세요(x, y): ");
	scanf("%d, %d", &p2.x, &p2.y);
	printf("\n");

	// 출력부 1:좌표 일치/불일치 여부
	if (equal(p1, p2) == 1)
		printf("두 좌표의 일치평가: 1(일치)\n");
	else
		printf("두 좌표의 일치평가: 0(불일치)\n");
	printf("\n");

	// 출력부 2: 사분면 위치
	printQuadrant(p1, quadrant(p1));
	printQuadrant(p2, quadrant(p2));

	return 0;
}

// 좌표 일치/불일치 비교 함수 정의
int equal(struct point p1, struct point p2)
{
	if (p1.x == p2.x && p1.y == p2.y) // 좌표가 일치할 경우
		return 1;
	else // 좌표가 불일치할 경우
		return 0;
}

// 사분면 위치 반환 함수 정의
int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0) // 1사분면
		return 1;
	else if (p.x < 0 && p.y > 0) // 2사분면
		return 2;
	else if (p.x < 0 && p.y < 0) // 3사분면
		return 3;
	else if (p.x > 0 && p.y < 0) // 4사분면
		return 4;
	else // 원점
		return 0;
}

// 사분면 위치 출력 함수 정의
void printQuadrant(struct point p, int quadrant)
{
	if (quadrant == 0)
		printf("좌표 (%d, %d)는 원점입니다.\n", p.x, p.y);
	else
		printf("좌표 (%d, %d)는 %d 사분면에 속합니다.\n", p.x, p.y, quadrant);
}