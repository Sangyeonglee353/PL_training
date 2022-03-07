/*예제 stringpointer1-1.c*/
#include <stdio.h>

int test8_main()
{
	int i;
	char str1[5] = "abcd";
	char* str2 = "ABCD";

	// 문자열 배열 선언으로 저장되어 있는 메모리 번지와 문자를 확인 
	for (i = 0; i < 5; i++) {
		printf("메모리 번지: %d 문자: %c \n", &str1[i], str1[i]);

	}

	// 문자열 포인터 선언으로 저장되어 있는 메모리 번지와 문자를 확인 
	for (i = 0; i < 5; i++) {
		printf("메모리 번지: %d 문자: %c \n", &str2[i], str2[i]);

	}

	printf("%s \n", str1);
	printf("%s \n", str2);

	str1[0] = 'x';  // O.K. 가능
	//str2[0] = 'x';  // O.K. 불가

	printf("%s \n", str1);
	printf("%s \n", str2);

	return 0;
}
