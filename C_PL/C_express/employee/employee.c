#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
	int id;
	char* name;
	int salary;
	struct employee* next;
} employee;

int main(void) {
	// ù��° ��� one, �ι�° ���� two ����
	employee* one = (employee*)malloc(sizeof(employee));
	employee* two = (employee*)malloc(sizeof(employee));
	
	one->id = 20146729;
	one->salary = 2500;
	one->name = (char*)malloc(strlen("�����") + 1); // ����ü ������ ���ڿ� �����͸� ����Ϸ��� �����޸� �Ҵ��ؾ��� �̿� ����
	strcpy(one->name, "�����"); // �� ������ �ش� ��ġ�� ���ڿ� ī��
	one->next = NULL; // ù���� ������ NULL
	
	// 2��° ��� you �߰�
	two->id = 20146730;
	two->salary = 3000;
	two->name = (char*)malloc(strlen("ȫ�浿") + 1);
	strcpy(two->name, "ȫ�浿");
	
	one->next = two; // �ι�° ����� ù��° ����� ����
	two->next = NULL; // �ι�° ��� ������ NULL

	//?? ����° ���(�����̸�)�� �����ؼ� �����غ���. ����//
	employee* three = (employee*)malloc(sizeof(employee));
	three->id = 202013322;
	three->salary = 3500;
	three->name = (char*)malloc(strlen("�������")+1);
	strcpy(three->name, "�������");
	
	two->next = three; // ����° ����� �ι�° ����� ����
	three->next = NULL; // ����° ��� ������ NULL
	
	// �ι�° ��� ���� ��
	printf("%d %s %d \n", one->id, one->name, one->salary);
	printf("%d %s %d \n", two->id, two->name, two->salary);
	printf("%d %s %d \n", one->next->id, one->next->name, one->next->salary);
	printf("%d %s %d \n", three->id, three->name, three->salary);
	printf("%d %s %d \n", two->next->id, two->next->name, two->next->salary);
	
	// �ι�° ��� ����
	free(two->name);
	free(two);
	// ù��° ����� ����° ��� ����
	one->next = three;
	
	// �ι�° ��� ���� ��
	printf("�ι�° ��� ���� ��\n");
	printf("%d %s %d \n", one->id, one->name, one->salary);
	printf("%d %s %d \n", one->next->id, one->next->name, one->next->salary);

	free(one->name); // �� �̸��� ���� �޸� �Ҵ� ����
	free(three->name);
	
	return 0;
	

}