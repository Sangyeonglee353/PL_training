#include <stdio.h>
#include <string.h>

//���ڿ��� ���� ���ϱ�(strlen)
void main(void)
{
	char string[200];

	printf("������ �Է��� ��, Enter Ű�� ġ����!\n");
	printf("�ƹ��͵� �Է����� ������ ���α׷��� ����˴ϴ�!\n");

	do
	{
		gets(string);

		if (strlen(string) == 0)
		{
			break;
		}

		printf("���ڿ��� ���̴� %d�Դϴ�. \n", strlen(string));
	} while (1);
}