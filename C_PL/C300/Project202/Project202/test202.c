// printf() 함수 100% 활용하기(printf)

#include<stdio.h>

void main(void)
{
	int i;
	char* pi;
	char* string = "books";

	// 문자, 정수값
	printf("[%c] \n", 'A'); // [A]
	printf("[%d] \n", 7); // [7]
	printf("[%i] \n", 7); // [7]
	printf("[%5d] \n", 7); // [    7]
	printf("[%05d] \n", 7); // [00007]
	printf("[%+d]\n", -12345); // [-12345]
	printf("[%+d] \n", 12345); // [+12345]
	printf("[% d] \n", -12345); // [-12345]
	printf("[%u] \n", 12345); // [12345]
	printf("[%u] \n", -12345); // [4294954951]

	// 8진수, 16진수
	printf("[%x] \n", 0xFF); // [ff]
	printf("[%X] \n", 0xFF); // [FF]
	printf("[%#x] \n", 0xFF); // [0xff]
	printf("[%#x] \n", 12345); // [0x3039]
	printf("[%o] \n", 0123); // [123]
	printf("[%#o] \n", 0123); // [0123]

	// 고정 소수점
	printf("[%f] \n", 3.141592); // [3.141592]
	printf("[%5f] \n", 3.141592); // [3.141592]
	printf("[%f] \n", 3.141592); // [3]
	printf("[%2f] \n", 3.141592); // [3.14]
	printf("[%2.2f] \n", 3.141592); // [3.14]
	printf("[%5.5f] \n", 3.141592); // [3.14159]
	printf("[%20.5f] \n", 3.141592); // [       3.14159]
	printf("[%-20.5f] \n", 3.141592); // [3.14159        ]

	// 부동소수점
	printf("[%e] \n", 3.141592); // [3.141592e+000]
	printf("[%E] \n", 3.141592); // [3.141592E+000]
	printf("[%5e] \n", 3.141592); // [3.141592e+000]
	printf("[%.e] \n", 3.141592); // [3e+000]
	printf("[%.2e] \n", 3.141592); // [3.14e+000]
	printf("[%2.2e] \n", 3.141592); // [3.14e+000]
	printf("[%5.5e] \n", 3.141592); // [3.14159e+000]
	printf("[%20.5e] \n", 3.141592); // [      3.14159e+000]
	printf("[%20.2E] \n", 3.141592); // [      1.20E+010]
	printf("[%-20.2E] \n", 3.141592); // [1.20E+010      ]

	// 스마트형
	printf("[%g] \n", 3.141592); // [3.14159]

	// 문자열형
	printf("[%s] \n", string); // [books]
	printf("[%10s] \n", string); // [    books]
	printf("[%-10s] \n", string); // [books    ]
	printf("[%2s] \n", string); // [books]
	printf("[%2.2s] \n", string); // [bo]
	printf("[%3.2s] \n", string); // [ bo]
	printf("[%010s] \n", string); // [00000books]

	// 포인터형
	printf("[%p] \n", &i); // [0012FF7C]
	printf("[%p] \n", &pi); // [0012FF78]

}