// [예제 1] union

#include<stdio.h>

union u_data {
	int d1;
	double d2; // 8바이트 -> float: 4바이트
	char d3;
};

int main(void)
{
	union u_data data;

	data.d1 = 2; // 하나씩만 사용가능
	printf("%d, %f, %c \n", data.d1, data.d2, data.d3);

	data.d2 = 3.3;
	printf("%d, %f, %c \n", data.d1, data.d2, data.d3);

	data.d3 = 'a';
	printf("%d, %f, %c \n", data.d1, data.d2, data.d3);

	printf("data의 메모리 크기: %d byte\n", sizeof(data));

	// 공용체 변수 data가 메모리 공간을 얼마나 차지하고 있는지 확인해 보자.

	return 0;
}