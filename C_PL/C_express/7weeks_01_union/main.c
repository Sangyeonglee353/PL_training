// [���� 1] union

#include<stdio.h>

union u_data {
	int d1;
	double d2; // 8����Ʈ -> float: 4����Ʈ
	char d3;
};

int main(void)
{
	union u_data data;

	data.d1 = 2; // �ϳ����� ��밡��
	printf("%d, %f, %c \n", data.d1, data.d2, data.d3);

	data.d2 = 3.3;
	printf("%d, %f, %c \n", data.d1, data.d2, data.d3);

	data.d3 = 'a';
	printf("%d, %f, %c \n", data.d1, data.d2, data.d3);

	printf("data�� �޸� ũ��: %d byte\n", sizeof(data));

	// ����ü ���� data�� �޸� ������ �󸶳� �����ϰ� �ִ��� Ȯ���� ����.

	return 0;
}