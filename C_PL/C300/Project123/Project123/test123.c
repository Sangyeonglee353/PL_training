// ����ü �迭 ������ ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct tagAddress
{
	char name[30]; // �̸�
	char phone[20]; // ��ȭ
	char address[100]; // �ּ�
};

void main(void)
{
	struct tagAddress ad[3];
	struct tagAddress* pad;
	int i;

	pad = ad; // �迭 �����̹Ƿ� ���� ���� ������(&)�� ������� �ʽ��ϴ�.

	for (i = 0; i < 3; i++)
	{
		sprintf(pad[i].name, "ȫ�浿 %d", i);
		strcpy(pad[i].phone, "02-1234-5678");
		strcpy(pad[i].address, "����� ��õ�� �񵿾���Ʈ 13����");
	}

	for (i = 0; i < 3; i++)
	{
		printf("�̸�: %s \n", pad[i].name);
		printf("��ȭ: %s \n", pad[i].phone);
		printf("�ּ�: %s \n", pad[i].address);
	}
}