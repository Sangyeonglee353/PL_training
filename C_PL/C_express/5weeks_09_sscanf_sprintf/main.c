// [���� 8] sscanf, sprintf
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d", &value); // 100�� �о�ͼ� value�� �����϶�
	printf("%d\n", value);    // value �� ȣ����
	sprintf(s2, "%d", value); // value ���� s2�� �����϶�
	printf("%s\n", s2);

	return 0;
}