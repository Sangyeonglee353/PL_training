// ���ڿ��� ������ ��ȯ�ϱ� 1 (atoi)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int count; // 3ȸ�� ī��Ʈ�ϱ� ���� ����
	int total = 0; // ���� ���� ���� �ջ��ϱ� ���� ����
	char string[100];

	for (count = 1; count <= 3; count++)
	{
		printf("%d ��° ���ڿ��� �Է��� �� EnterŰ�� ��������. \n", count);

		gets(string);

		total += atoi(string);

		printf("�Է� �� = %d, ���� = %d \n", atoi(string), total);
	}

	printf("���� ���ڿ��� �� ���� %d�Դϴ�. \n", total);
}