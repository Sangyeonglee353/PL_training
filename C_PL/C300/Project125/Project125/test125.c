// ����ü�� ���̸� ���ϰ� �ʱ�ȭ�ϱ�

#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30]; // �̸�
	char phone[20]; // ��ȭ
	char address[100]; // �ּ�
};

typedef struct tagAddress addr;

void main(void)
{
	addr ad; // struct tagAddress ad;
	int len;

	len = sizeof(addr); // sizeof(struct tagAddress)

	printf("����ü addr�� ũ��: %d \n", len);

	memset(&ad, 0, len); // memset(&ad, 0, sizeof(addr));
}