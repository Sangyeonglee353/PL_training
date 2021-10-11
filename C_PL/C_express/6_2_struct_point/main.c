// [�ǽ����� 2] Struct_point, ��ǥ ��ġ ���ο� ��и� ��ġ ����ϱ�
#include <stdio.h>

int equal(struct point p1, struct point p2); // ��ǥ ��ġ/����ġ �� �Լ� ����
int quadrant(struct point p); // ��и� ��ġ ��ȯ �Լ� ����
void printQuadrant(struct point p, int quadrant); // ��и� ��ġ ��� �Լ� ����

struct point { // ����ü ����
	int x, y;
};

int main(void) {
	struct point p1, p2; // ����ü ���� ����

	// �Էº�: ��ǥ �� 
	printf("ù ��° ��ǥ�� �Է����ּ���(x, y): ");
	scanf("%d, %d", &p1.x, &p1.y);
	printf("�� ��° ��ǥ�� �Է����ּ���(x, y): ");
	scanf("%d, %d", &p2.x, &p2.y);
	printf("\n");

	// ��º� 1:��ǥ ��ġ/����ġ ����
	if (equal(p1, p2) == 1)
		printf("�� ��ǥ�� ��ġ��: 1(��ġ)\n");
	else
		printf("�� ��ǥ�� ��ġ��: 0(����ġ)\n");
	printf("\n");

	// ��º� 2: ��и� ��ġ
	printQuadrant(p1, quadrant(p1));
	printQuadrant(p2, quadrant(p2));

	return 0;
}

// ��ǥ ��ġ/����ġ �� �Լ� ����
int equal(struct point p1, struct point p2)
{
	if (p1.x == p2.x && p1.y == p2.y) // ��ǥ�� ��ġ�� ���
		return 1;
	else // ��ǥ�� ����ġ�� ���
		return 0;
}

// ��и� ��ġ ��ȯ �Լ� ����
int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0) // 1��и�
		return 1;
	else if (p.x < 0 && p.y > 0) // 2��и�
		return 2;
	else if (p.x < 0 && p.y < 0) // 3��и�
		return 3;
	else if (p.x > 0 && p.y < 0) // 4��и�
		return 4;
	else // ����
		return 0;
}

// ��и� ��ġ ��� �Լ� ����
void printQuadrant(struct point p, int quadrant)
{
	if (quadrant == 0)
		printf("��ǥ (%d, %d)�� �����Դϴ�.\n", p.x, p.y);
	else
		printf("��ǥ (%d, %d)�� %d ��и鿡 ���մϴ�.\n", p.x, p.y, quadrant);
}