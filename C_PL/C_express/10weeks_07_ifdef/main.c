// [���� 7] ifdef
#include <stdio.h>
#define PI 3.141592

int main(void)
{
#ifdef PI
	printf("PI�� ���� ? %f \n", PI);
#else
	printf("PI�� ���ǵ��� �ʾҽ��ϴ�. \n");
#endif

	return 0;
}