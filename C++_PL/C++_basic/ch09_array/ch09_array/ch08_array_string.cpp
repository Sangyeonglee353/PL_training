#include <iostream>

using namespace std;

int main() {
	/*
	C++�� ���յ��������� �����Ѵ�.
	>> ����� ���Ǵ�� ���ο� ���������� ���� �� �ִ�.
	���յ�������: �⺻ �������� �ε��Ҽ������� ����
	
	�迭(array): ���� ���������� ����
	typeName arrayNmae[arraysize];
	*/

	short month[12] = { 1, 2, 3 }; // ����
	cout << month[1] << endl;

	/*
	�迭 ���ҿ� ������ ������ �޸��� �����Ͽ� �߰�ȣ�� ���� �����Ѵ�.
	�ʱ�ȭ�� ���� ���� ���߿� �� ���� ����.
	�迭�� �ٸ� �迭�� ��°�� ������ �� ����.
	short month[5] = { ... }
	�ʱ�ȭ ���� ������ �迭 ������ �������� ���ڶ�� ������ �� �ִ�.
	�迭�� �κ������� �ʱ�ȭ�ϸ�, ������ ���ҵ��� ��� 9���� �����Ѵ�.
	��, ���������� ù ���� ���Ҹ� 9���� �ʱ�ȭ�ϸ�, ������ ���ҵ��� ��� 9���� �ʱ�ȭ�ȴ�.
	�迭�� �ʱ�ȭ�� �� ���ȣ ���� ����θ� �����Ϸ��� �ʱ�ȭ ���� ������ ��Ʒ� �迭 ���� ������ �����Ѵ�.
	*/

	// ���ڿ�
	char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};

	cout << a << endl;

	return 0;
}