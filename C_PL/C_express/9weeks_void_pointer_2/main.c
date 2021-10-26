// ���� 8: void ������ 2
#include <stdio.h>
#include <string.h>

void swap(char*, void*, void*); // �Լ�����

int main() {
	int a = 10, b = 20;
	double da = 1.5, db = 2.5;

	printf("������ ��ȯ ��: a=%d, b=%d \n", a, b); // ��ȯ �� ��� ���
	swap("int", &a, &b); // �� �������� ��ȯ
	printf("������ ��ȯ ��: a=%d, b=%d \n", a, b); // ��ȯ �� ��� ���

	printf("�Ǽ��� ��ȯ ��: da=%.1f, db=%.1f \n", da, db); // ��ȯ �� ��� ���
	swap("double", &da, &db); // �� �Ǽ��� ��ȯ
	printf("�Ǽ��� ��ȯ ��: da=%.1f, db=%.1f \n", da, db); // ��ȯ �� ��� ���

	return 0;
}

void swap(char*type, void* vp1, void* vp2)
{
	int itemp;
	double dtemp;

	if (strcmp(type, "int") == 0) { // ��ȯ�� �ڷ����� "int" ���̸�
		itemp = *(int*)vp1;
		*(int*)vp1 = *(int*)vp2; // vp1, vp2�� int*�� ����ȯ
		*(int*)vp2 = itemp;
	}

	if (strcmp(type, "double") == 0) { // ��ȯ�� �ڷ����� "double" ���̸�
		dtemp = *(double*)vp1;
		*(double*)vp1 = *(double*)vp2; // vp1, vp2�� double*�� ����ȯ
		*(double*)vp2 = dtemp;
	}
}
