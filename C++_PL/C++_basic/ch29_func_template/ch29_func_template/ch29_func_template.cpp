#include <iostream>

using namespace std;

// class Ȥ�� typeName
//template <class Any>
//Any sum(Any, Any);
//
//int main() {
//	// ��ü ���� ���α׷����� ��ǥ �� �ϳ�
//	// �Ϲ�ȭ��?
//	// ���������� ��� ���� �Ϲ������� ���������� ����� �� �ֵ��� ����� ��
//	// �Լ� ���ø� -> �Ϲ�ȭ ���α׷���
//	// ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� �����Ѵ�.
//
//	int a = 3;
//	int b = 4;
//	cout << sum(a, b) << endl;
//
//	float c = 3.14;
//	float d = 1.592;
//	cout << sum(c, d) << endl;
//
//	// ù��° �ĸ����Ͱ� int���̹Ƿ� any�� type�� int�� ������.
//	// �׷��� ���� �߻�
//	cout << sum(a, c) << endl;
//
//	return 0;
//}
//
//template<class Any>
//Any sum(Any a, Any b)
//{
//	return a+b;
//}

/* 
[���� �ذ� ���]
1. �Լ� �����ε��� �̿�
*/

template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main() {
	int a = 3;
	int b = 4;
	// �����ε� �� �� ���� ���ø��� ��� ��ġ�ϹǷ� �����߻�
	// cout << sum(a, b) << endl;
	
	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;
	
	// �Լ� �����ε����� �ذ�
	cout << sum(a, c) << endl;
	return 0;
}

template<class Any>
Any sum(Any a, Any b)
{
	return a+b;
}

template<class Any>
Any sum(int a, Any b)
{
	return a+b;
}
