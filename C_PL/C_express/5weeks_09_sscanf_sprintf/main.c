// [예제 8] sscanf, sprintf
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d", &value); // 100을 읽어와서 value에 저장하라
	printf("%d\n", value);    // value 값 호가인
	sprintf(s2, "%d", value); // value 값을 s2에 저장하라
	printf("%s\n", s2);

	return 0;
}