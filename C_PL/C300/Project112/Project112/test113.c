// 2���� �迭 ����ϱ�

#include <stdio.h>

void main(void)
{
	int i;
	int jumsu[100][3];
	int tota[3] = { 0, };

	for (i = 0; i < 100; i++)
	{
		jumsu[i][0] = 92; // ���� ����
		jumsu[i][1] = 90; // ���� ����
		jumsu[i][2] = 95; // ���� ����
	}
	for (i = 0; i < 100; i++)
	{
		tota[0] += jumsu[i][0]; // ���� ����
		tota[1] += jumsu[i][1]; // ���� ����
		tota[2] += jumsu[i][2]; // ���� ����
	}

	printf("���� ������ ����: %d \n", tota[0]);
	printf("���� ������ ����: %d \n", tota[1]);
	printf("���� ������ ����: %d \n", tota[2]);
}