// getchar()�� getch() ���� Ȯ���ϱ�
#include <stdio.h>

int main(void) {
	int ch; // char������ �ص� �������

	//ch = getchar(); // ���۸� ����ؼ� ���� �� �Է�
	ch = getch(); // ���۸� ������� �ʾƼ� ���;��� �ٷ� �Է�

	printf("ch = %c \n", ch);

	return 0;
}