/* commandline.c */
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;

	printf("���� ��ɾ� �� ����(command line arguments) >>\n\n");
	printf("���� ���α׷� �̸��� ���ļ� ������ ������ ? >>\n");
	printf("��� (argc =) %d�� �Դϴ�.\n", argc);
	printf("������ ���ڿ��� ������ �����ϴ�. >>\n");
	for (i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}
}