// [���� 10] sscanf, ssprintf ��ȭ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value1, value2, value3;

	sscanf(s1, "%d %d %d", &value1, &value2, &value3); // ���ڿ��� ��ġ�� ��ȯ
	printf("%d %d %d \n", value1, value2, value3);
	sprintf(s2, "%d %d %d \n", value1, value2, value3); // ��ġ�� ���ڿ��� ����
	printf("%s\n", s2);

	return 0;
}