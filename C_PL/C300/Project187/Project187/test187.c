// �־��� ���� ������ �Ҽ��� �и��ϱ�(modf)

#include <stdio.h>
#include <math.h>

void main(void)
{
	double x = 2.3, n, y;

	y = modf(x, &n);

	printf("2.3�� ������ �Ҽ��� �и��ϸ�, %g�� %g�Դϴ�. \n", n, y);
}