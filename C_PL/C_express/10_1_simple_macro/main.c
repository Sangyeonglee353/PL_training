// [�ǽ����� 10-1] �ܼ� ��ũ�θ� �̿��� ������� ���� ���ϱ�
#include <stdio.h>
#define PI 3.141592
#define VOLUME(r, h) (PI*r*r*h)

int main(void) {
	int r, h;
	
	printf("������� �������� ���̸� �Է��ϼ���: ");
	scanf("%d %d", &r, &h);
	printf("������� ���Ǵ� %.4f�Դϴ�.\n", VOLUME(r, h));

	return 0;
}

