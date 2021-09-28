// [예제] gets
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	gets(name); // 한 단어 이상을 입력받을 때에 사용한다.
	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address);
	puts(name);
	puts(address);

	return 0;
}