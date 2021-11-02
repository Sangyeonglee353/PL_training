// [예제 3] # 연산자
#include <stdio.h>

//#define PRINT(x) printf("x = %d\n", x);

//#define PRINT(exp) printf("exp = %d\n", exp);
#define PRINT(exp) printf(#exp"= %d\n", exp);

int main(void)
{
	int x = 5;

	PRINT(x);

	return 0;
}