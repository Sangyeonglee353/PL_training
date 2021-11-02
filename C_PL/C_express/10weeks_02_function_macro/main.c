// [예제 2] 함수 매크로
#include <stdio.h>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	int x = 2;

	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%f\n", SQUARE(1.2)); // 실수에도 적용 가능
	printf("%d\n", SQUARE(x + 3));
	printf("%d\n", 100 / SQUARE(x)); 
	printf("%d\n", SQUARE(++x)); // 9가 아니고 16이 출력됨 이유는??
	                             // x값이 여기서 먼저 증가해서 3이 되고
	                             // 함수 매크로에서도 ((++x)*(++x))로 치환되므로 (4)*(4)가 진해오딘다.
	return 0;
}