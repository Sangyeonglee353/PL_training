// [예제 7] ifdef
#include <stdio.h>
#define PI 3.141592

int main(void)
{
#ifdef PI
	printf("PI의 값은 ? %f \n", PI);
#else
	printf("PI가 정의되지 않았습니다. \n");
#endif

	return 0;
}