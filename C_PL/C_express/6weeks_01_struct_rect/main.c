// [���� 1]: �簢���� �ѷ��� ���� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void) {
	struct rect r;
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("������ �ϴ��� ��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p1.y - r.p2.y;

	area = abs(w * h);
	peri = abs(2 * w) + abs(2 * h);
	printf("������ %d�̰� �ѷ��� %d�Դϴ�. \n", area, peri);

	return 0;
}