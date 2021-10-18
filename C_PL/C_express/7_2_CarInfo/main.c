// [�ǽ����� 7-2] CarInfo, ���� ���� ������ �����ϴ� ���α׷� �ۼ��ϱ�
#include <stdio.h>
#define NUMBER 3 // ����ü �迭 ���� ũ�� ����

struct person { // ���� ���� ����ü ����
	char* name;       // �̸�
	char* tel;        // ��ȭ��ȣ
	char* address;    // �ּ�
};

union ownership { // ���ΰ� ȸ�翡 ���� ������ ����ü ����
	struct person p;
	char* company;    // ȸ���
};

struct car { // �ڵ��� ���� ����ü ����
	int year; // ����
	char* carname; // ���� ����
	int type; // �����̸� 0, ȸ���̸� 1
	union ownership owner; // ������
};

// ����ü car�� struct���� ����� �� �ֵ��� car�� Ÿ�� ����
typedef struct car car; 

int main(void) {
	// ����ü �迭 ���� �� �ʱ�ȭ
	car list[NUMBER]= { { 201209, "�׷��� GT", 0, {"ȫ�浿", "011-1111-1111", "����� ���α� ��ô��"}},
	                    { 201304, "���Ǵ�Ƽ", 1, "���Ǵ�Ƽ�Ͻ�" },
	                    { 202010, "����Ｚ", 0, {"�����", "010-2606-8038", "�泲 õ�Ƚ�"} } };

	// ��ϵ� ���� ���� ���
	printf("���\t\t����\t\t����\n");
	for (int i = 0; i < NUMBER; i++) {
		if (list[i].type == 0) {
			printf("%d\t\t%s\t%s %s %s\n", list[i].year, list[i].carname, list[i].owner.p.name, \
				list[i].owner.p.tel, list[i].owner.p.address);
		}
		else if (list[i].type == 1) {
			printf("%d\t\t%s\t%s\n", list[i].year, list[i].carname, list[i].owner.company);
		}
		else {
			printf("��� Ÿ���� �߸��Ǿ����ϴ�.\n");
		}
	}
	return 0;
}

