// 문자와 문자열
#include <stdio.h>

//int main(void) {
//	char c2[] = "C language";
//	int arraySize = sizeof(c2);
//
//	printf("문자 배열의 크기: %d\n", arraySize);
//
//	// 문자열 출력: case 1
//	for (int i = 0; c2[i] != '\0'; i++)
//		printf("%c", c2[i]);
//	printf("\n");
//
//	// 문자열 출력: case 2
//	int i = 0;
//	while (c2[i] != '\0') // c2[i] != NULL과 동일
//		printf("%c", c2[i++]);
//	printf("\n");
//
//	// 문자열 출력: case 3
//	printf("%s \n", c2);
//
//	return 0;
//}

int main(void) {
	char* c4 = "C language";
	int arraySize = sizeof(c4);

	printf("문자 포인터의 크기: %d\n", arraySize);

	// 문자열 출력: case 1
	for (int i = 0; c4[i] != '\0'; i++)
		printf("%c", c4[i]);
	printf("\n");

	// 문자열 출력: case 2
	int i = 0;
	while (c4[i] != '\0') // c4[i] != NULL과 동일
		printf("%c", c4[i++]);
	printf("\n");

	// 문자열 출력: case 3
	printf("%s \n", c4);

	// 문자열 출력: case 4
	i = 0;
	while (c4[i] != '\0') // c4[i] != NULL과 동일
		printf("%c", *c4++);
	printf("\n");

	return 0;
}