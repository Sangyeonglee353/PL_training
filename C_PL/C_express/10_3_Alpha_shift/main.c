// [�ǽ����� 10-3] Alpha_shift, ��Ʈ �����ڸ� �̿��Ͽ� ��ҹ��� �����ϱ�
#include<stdio.h>
#define SIZE 50 // ���ڿ��� ũ�� ����

int main(void) {
	char word[SIZE];
	int  i = 0;

	// 1. ���ڿ� �Է¹ޱ�
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", &word);
	
	// 2. ��ҹ��� ��ȯ
	while(word[i] != '\0'){
		word[i] = word[i] ^ 0x20;
		i++;
	}

	// 3. ���� ����� ���
	printf("��� ���ڿ�: %s\n", word);

	return 0;
}