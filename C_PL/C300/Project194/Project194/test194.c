// ��ũ�� �Լ� �����ϱ� 2

#include <Stdio.h>

#define x_i(xi,i) printf("x%s�� ���� %d�Դϴ�. \n", #i, x##i)

void main(void)
{
	int xa = 3, xb = 5;

	x_i(x, a);
	x_i(x, b);
}