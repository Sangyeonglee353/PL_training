// 2����/16���� ���ڿ��� ���������� ��ȯ�ϱ�(strtol)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char string1[] = "1010"; // 2����
	char string2[] = "ff"; // 16����
	char* stop;
	long value;

	value = strtol(string1, &stop, 2);
	printf("2�����ڿ� \"%s\"�� ������ �ٲٸ� %d�Դϴ�. \n", string1, value);

	value = strtol(string2, &stop, 16);
	printf("16�����ڿ� \"%s\"�� ������ �ٲٸ� %d�Դϴ�. \n", string2, value);
}