// [�ǽ����� 5-2] StrToken, �Էµ� ���ڿ��� �� �ܾ ���� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STRING_SIZE 200 // ���庰 �ִ� ���� ��
#define LINE_NUM 10 // �ִ� 10������� �Է�

int main(void) {

	char str[LINE_NUM][STRING_SIZE]; // ���� ���ڿ� ���� �迭 ���� ����
	char seps[] = " ,.!\t"; // �и���
	char* token;
	int lineCnt = 0; // �Է¹��� ���� ��

	// �⺻ ���� �ȳ��� ���
	printf("���� �ٿ� ���ϴ� ������ �Է��ϼ���.\n");
	printf("�Է��� �� �Ǿ����� ���ο� �ٿ� ctrl+Z, �׸��� Enter�� �Է��ϼ���.\n");
	
	// ���� �Էº�
	for (int i = 0; i < LINE_NUM; i++)
	{
		// ���� �Է�
		// Ctrl+Z �Է� �� Enter �Է� �� ����
		if (gets_s(str[i], sizeof(char) * STRING_SIZE) == NULL) { 
			break;
		}
		lineCnt++; // �Է¹��� ���� ī��Ʈ
	}
	
	// ���� ��º�
	for (int i = 0; i < lineCnt; i++)
	{
		printf(">> %d�ٿ� �Է��� �ܾ�(��ū) ��� >>\n", i+1);
		// ���ڿ��� �����ϰ� ���� ��ū�� ��´�.
		token = strtok(str[i], seps);
		while (token != NULL) {
			// ���ڿ� s�� ��ū�� �ִ� ���� �ݺ��ϸ鼭 �ܾ��� ���ڼ��� ����Ѵ�.
			printf("   strlen(%s)=%d\n", token, strlen(token));
			// ���� ��ū�� ��´�.
			token = strtok(NULL, seps);
		}
	}	
	return 0;
}