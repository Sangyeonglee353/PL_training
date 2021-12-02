// [�ǽ����� 11-1] address, �ּҷ� ���� �����
#include <stdio.h>
#define C_SIZE 30 // ���ڿ��� ũ��

struct address {
	char name[C_SIZE]; // �̸�
	char addr[C_SIZE]; // �ּ�
	char tel[C_SIZE]; // ��ȭ��ȣ
};

int main(void)
{
	FILE* fp = NULL;
	int number; // ����
	struct address a; // ����ü address�� ���� a�� ����

	//���Ͽ���
	fp = fopen("address.txt", "w");

	// ���Ͽ��� ���� ���� �˻�
	if (fp == NULL)
	{
		printf("���Ͽ��� ���� \n");
	}
	else
	{
		printf("���Ͽ��� ���� \n");
	}

	// ��� ī�װ� ���� ���Ͽ� �����մϴ�."
	fprintf(fp, "����\t�̸�\t�ּ�\t\t��ȭ��ȣ\n");

	// ������ �Է¹޾� ���Ͽ� �����մϴ�.
	while (1)
	{
		printf("������ �Է��Ͻÿ�(�����̸� ����):");
		scanf("%d", &number);

		if (number < 0)
		{
			break;
		}

		printf("�̸�, �ּ�, ��ȭ��ȣ�� �Է��Ͻÿ�:");
		scanf("%s %s %s", &a.name, &a.addr, &a.tel);
		fprintf(fp, "%-4d\t%s\t%s\t%s\n", number, &a.name, &a.addr, &a.tel);
	}
	fclose(fp);

	return 0;
}