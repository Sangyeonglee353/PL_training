// ���� 6: const ������
#include <stdio.h>

int main(void) {
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools";
	const char* p = s;
	char* const q = s;

	// p[3] = 'a'; // p�� ����Ű�� ���� ������ ������ �� ����.

	p = t; // ������ p�� ������ �����ϴ�.

	q[3] = 'a'; // q�� ����Ű�� ���� ������ ������ �� �ִ�.

	// q = t; // ������ q�� ������ �Ұ����ϴ�.

	return 0;
}