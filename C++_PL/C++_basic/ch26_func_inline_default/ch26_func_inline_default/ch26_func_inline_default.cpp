#include <iostream>

using namespace std;

inline float square(float x) { return x * x; };

int main() {
	// �ζ��� �Լ�
	// ���α׷� ���� �ӵ� ���
	// �ζ��� �Լ��ڵ尡 ���������� ���������� �ӵ������ �̺�
	int a = 5;
	cout << "�� ���� ���̰� " << a << "�� ���簢���� ���̴�? " << endl;
	float b = square(a);
	cout << b << endl;
	
	return 0;
}