#include <stdio.h>
#define PI 3.141592 // case 1: 원주율을 상수로 선언

int main(void) {
	const double radius = 5.5; // case 2: 원의 반지름을 상수로 선언
	double circleArea = radius * radius * PI; // 원의 면적 계산

	printf("원의 반지름: %.1lf\n", radius);
	printf("원의 면적: %.2lf\n", circleArea);

	return 0;
}