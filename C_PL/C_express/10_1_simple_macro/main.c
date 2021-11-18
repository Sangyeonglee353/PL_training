// [실습과제 10-1] 단순 매크로를 이용한 원기둥의 부피 구하기
#include <stdio.h>
#define PI 3.141592
#define VOLUME(r, h) (PI*r*r*h)

int main(void) {
	int r, h;
	
	printf("원기둥의 반지름과 높이를 입력하세요: ");
	scanf("%d %d", &r, &h);
	printf("원기둥의 부피는 %.4f입니다.\n", VOLUME(r, h));

	return 0;
}

