// [예제 10] strcpy, strcat 응용 -> 파일 이름 일괄 수정하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char filename[100];
	char s[100];
	int i;
	for (i = 0; i < 6; i++) {
		strcpy(filename, "image");
		sprintf(s, "%d", i);
		strcat(filename, s);
		strcat(filename, ".jpg");
		printf("%s \n", filename);
	}
	return 0;
}