#include <stdio.h>

void main(void)
{
	int count; // 3ȸ�� ī��Ʈ�ϱ� ���� ����
	int tmp; // �������� ���� �ӽ� ����
	int total = 0; // ���� �������� �ջ��ϱ� ���� ����

	for (count = 1; count <= 3; count++)
	{
		printf("%d ��° �������� �Է��� �� Enter Ű�� ��������. \n", count);

		scanf_s("%d", &tmp);

		total += tmp;

		printf("�Է� �� = %d, ���� = %d \n", tmp, total);
	}
	
	printf("���� ������ ������ %d�Դϴ�. \n", total);
}