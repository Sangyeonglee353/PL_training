#include <stdio.h>
#define PI 3.141592 // case 1: �������� ����� ����

int main(void) {
	const double radius = 5.5; // case 2: ���� �������� ����� ����
	double circleArea = radius * radius * PI; // ���� ���� ���

	printf("���� ������: %.1lf\n", radius);
	printf("���� ����: %.2lf\n", circleArea);

	return 0;
}