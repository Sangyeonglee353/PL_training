// [���� 2]: ����ü ���� ���԰� ��
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };

	p2 = p1; // ���԰���

	printf("p2.x = %d, p2.y= %d\n", p2.x, p2.y); // p2 ���Ȯ��
	
	//if (p1 == p2) // �� -> ������ ����!!
	//	printf("p1�� p2�� �����ϴ�.");

	if ((p1.x == p2.x) && (p1.y == p2.y)) // �ùٸ� ��
		printf("p1�� p2�� �����ϴ�. \n");
}