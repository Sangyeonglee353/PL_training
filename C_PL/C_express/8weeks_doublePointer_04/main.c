// ���� 5: �������� ������
#include <stdio.h>

void change(char**); // �������� �����͸� �Ű������� �޴� �Լ� ����

int main() {
	char* cp[3]; // char���� ������ �迭 ����

	cp[0] = "�ѱ�����������б�";
	cp[1] = "���ͳݹ̵����к�";
	cp[2] = "��Ƽ�̵������";

	printf("cp[0]�� ����Ű�� �ּҰ�: %p \n", cp[0]);
	printf("cp[1]�� ����Ű�� �ּҰ�: %p \n", cp[1]);
	printf("cp[2]�� ����Ű�� �ּҰ�: %p \n", cp[2]);

	printf("cp�� ����Ű�� �ּҰ�: %p \n", cp);
	printf("cp[0]�� �ּ�: %p \n", &cp[0]);
	printf("cp[1]�� �ּ�: %p \n", &cp[1]);
	printf("cp[2]�� �ּ�: %p \n", &cp[2]);

	printf("%s %s %s \n\n", cp[0], cp[1], cp[2]);

	change(cp);
	//cpp = cp; // cpp = &cp[0]�� ���� ǥ���̴�.

	printf("change() �Լ��� ȣ���� ���� ���� \n\n");

	printf("cp[0]�� ����Ű�� �ּҰ�: %p \n", cp[0]);
	printf("cp[1]�� ����Ű�� �ּҰ�: %p \n", cp[1]);
	printf("cp[2]�� ����Ű�� �ּҰ�: %p \n", cp[2]);

	printf("cp�� ����Ű�� �ּҰ�: %p \n", cp);
	printf("cp[0]�� �ּ�: %p \n", &cp[0]);
	printf("cp[1]�� �ּ�: %p \n", &cp[1]);
	printf("cp[2]�� �ּ�: %p \n", &cp[2]);

	printf("%s %s %s \n\n", cp[0], cp[1], cp[2]);

	return 0;
}

void change(char**temp) // void change(char *temp[])�� ����
{
	*temp++ = "�ѱ����б����";
	*temp++ = "���������к�";
	*temp = "��������ڰ��а�";
}
