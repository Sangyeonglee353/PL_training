// ���ڿ��� ���̸� ���ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0) // or while(str[i] != '\0') or while(str[i] != NULL)
		i++;
	printf("���ڿ���\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

	return 0;
}