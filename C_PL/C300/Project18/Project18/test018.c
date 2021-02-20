#include <stdio.h>

#define PI 3.141592

const double j = 1.23456789;

main()
{
	//PI = 3.141592; // 에러 발생
	//J = 1.23456789; // 에러 발생

	printf("실수형 실수 PI의 값은 %f \n", PI);
	printf("실수형 상수 j의 값은 %f \n", j);
}