// ��ũ�� �Լ� �����ϱ� 1

#include <Stdio.h>

#define max(x,y) x > y? x:y
#define min(x,y) x < y? x:y

void main(void)
{
	printf("�ִ밪: %d \n", max(5, 3));
	printf("�ּҰ�: %d \n", min(5, 3));
	printf("�ִ밪: %g \n", max(3.5, 4.4));
	printf("�ּҰ�: %g \n", min(3.5, 4.4));
}