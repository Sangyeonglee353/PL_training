// ����ü ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30]; // �̸�
	char phone[20]; // ��ȭ
	char address[100]; // �ּ�
}; //�߰�ȣ{}���� �����ݷ��� ���� ���߸��� ������.

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "����� ��õ�� �񵿾���Ʈ 13����");

	printf("�̸�: %s \n", ad.name);
	printf("��ȭ: %s \n", ad.phone);
	printf("�ּ�: %s \n", ad.address);
}