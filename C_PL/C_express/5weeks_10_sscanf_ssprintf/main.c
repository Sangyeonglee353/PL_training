// [예제 10] sscanf, ssprintf 심화
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value1, value2, value3;

	sscanf(s1, "%d %d %d", &value1, &value2, &value3); // 문자열을 수치로 변환
	printf("%d %d %d \n", value1, value2, value3);
	sprintf(s2, "%d %d %d \n", value1, value2, value3); // 수치를 문자열에 저장
	printf("%s\n", s2);

	return 0;
}