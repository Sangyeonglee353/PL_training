// [�ǽ����� 9-2] Caculator, ��ɾ��� �������� ���α׷��� �̿��� ���� ���α׷�
#include <stdio.h>
#include <string.h> // strcmp()�� ���� ����
#include <stdlib.h> // atoi()�� ���� ����
#include <ctype.h> // isdigit()�� ���� ����

void Add(int x, int y); // ���ϱ� �Լ� ����
void Sub(int x, int y); // ���� �Լ� ����
void Mul(int x, int y); // ���ϱ� �Լ� ����
void Div(int x, int y); // ������ �Լ� ����

int main(int argc, char* argv[]) {
	int x, y;

	if (argc == 5) // �μ��� ������ ���� ��
	{
		x = atoi(argv[3]); // 4��° �μ��� ������ ��ȯ
		y = atoi(argv[4]); // 5��° �μ��� ������ ��ȯ

		if (strcmp(argv[1], "-i") == 0) { // 2��° �μ��� "-i" ���� �˻�
			if (strcmp(argv[2], "a") == 0) { // 3��° �μ��� "a" ���� �˻�
				// 4��°, 5��° �μ��� �������� �˻�
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Add(x, y); // 4��°, 5��° �μ��� �������
				}
				else { // 4��°, 5��° �μ��� ������ �ƴ϶��
					printf("����� ���ڸ� �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���.\n");
				}
			}
			else if (strcmp(argv[2], "s") == 0) { // 3��° �μ��� "a" ���� �˻�
				// 4��°, 5��° �μ��� �������� �˻�
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Sub(x, y); // 4��°, 5��° �μ��� �������
				}
				else { // 4��°, 5��° �μ��� ������ �ƴ϶��
					printf("����� ���ڸ� �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���.\n");
				}
			}
			else if (strcmp(argv[2], "m") == 0) { // 3��° �μ��� "a" ���� �˻�
				// 4��°, 5��° �μ��� �������� �˻�
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Mul(x, y); // 4��°, 5��° �μ��� �������
				}
				else { // 4��°, 5��° �μ��� ������ �ƴ϶��
					printf("����� ���ڸ� �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���.\n");
				}
			}
			else if (strcmp(argv[2], "d") == 0) { // 3��° �μ��� "a" ���� �˻�
				// 4��°, 5��° �μ��� �������� �˻�
				if (isdigit(*argv[3]) != 0 && isdigit(*argv[4]) != 0) { 
					Div(x, y); // 4��°, 5��° �μ��� �������
				}
				else { // 4��°, 5��° �μ��� ������ �ƴ϶��
					printf("����� ���ڸ� �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���.\n");
				}
			}
			else { // 3��° �μ� Option�� �߸� �Է��� ���
				printf("���� Option(a(+), s(-), m(*), d(/))�� �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���.\n");
			}
		}
		else { // 2��° �μ� -i�� �߸� �Է��� ���
			printf("Option -i�� �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���.\n");
		}
	}
	else { // �μ��� ������ 5�� �ƴ� ���
		printf("�μ��� ������ ���� �ʽ��ϴ�.\n");
		printf("[���࿹��] Calculator -i a 2 5\n");
	}
	return 0;
}

void Add(int x, int y) // ���ϱ� �Լ� ����
{
	printf("%d + %d = %d �Դϴ�.\n", x, y, x + y);
}

void Sub(int x, int y) // ���� �Լ� ����
{
	printf("%d - %d = %d �Դϴ�.\n", x, y, x - y);
}

void Mul(int x, int y) // ���ϱ� �Լ� ����
{
	printf("%d * %d = %d �Դϴ�.\n", x, y, x * y);
}

void Div(int x, int y) // ������ �Լ� ����
{
	if (y != 0) {
		printf("%d / %d = %.2f �Դϴ�.\n", x, y, (float)x / (float)y);
	}
	else {
		printf("0���� ���� ���� �����ϴ�.\n");
	}
}
