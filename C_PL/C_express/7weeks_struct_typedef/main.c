// [���� 2] struct_typedef

#include <stdio.h>

// case 1: struct�� typedef
/*
struct point {
	int x;
	int y;
};

typedef struct point POINT;
*/

// case 2: struct�� typedef
typedef struct point {
	int x;
	int y;
} POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);
	printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.\n", result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta)
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}
