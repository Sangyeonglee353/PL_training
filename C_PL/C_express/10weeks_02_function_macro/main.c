// [���� 2] �Լ� ��ũ��
#include <stdio.h>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	int x = 2;

	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%f\n", SQUARE(1.2)); // �Ǽ����� ���� ����
	printf("%d\n", SQUARE(x + 3));
	printf("%d\n", 100 / SQUARE(x)); 
	printf("%d\n", SQUARE(++x)); // 9�� �ƴϰ� 16�� ��µ� ������??
	                             // x���� ���⼭ ���� �����ؼ� 3�� �ǰ�
	                             // �Լ� ��ũ�ο����� ((++x)*(++x))�� ġȯ�ǹǷ� (4)*(4)�� ���ؿ����.
	return 0;
}