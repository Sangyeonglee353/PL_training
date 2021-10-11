// [�ǽ����� 1] Struct_Person, ���� ���� �����ϱ�
#include <stdio.h>

void Display(struct Person info[]); // ����ü ��� �Լ� ����

struct Person { // ����ü ����
	char name[20];
	char tel[20];
	int office;
};

int main(void) {
	// ����ü �迭 ���� �� �ʱ�ȭ
	struct Person info[] = { { "Jae-Soo Cho", "041-560-1491", 425},
							 { "Sang-Jin Kim", "041-560-1490", 325},
							 { "Sung-Chul Park", "041-560-1492", 225}
	};

	// �Լ��� ����ü �� ���
	Display(info);

	return 0;
}

// ����ü ��� �Լ� ����
void Display(struct Person info[])
{
	// �ݺ������� ����ü �迭�� �� ���
	for (int i = 0; i < 3; i++)
	{
		printf("���%d: �̸�: %s, ��ȭ��ȣ: %s, ȣ��: %d\n", i + 1, \
			info[i].name, info[i].tel, info[i].office);
	}
}