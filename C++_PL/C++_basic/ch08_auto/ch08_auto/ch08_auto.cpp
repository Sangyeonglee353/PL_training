#include <iostream>

using namespace std;

int main()
{
	/*
	+: �� ���� �ǿ����� ���� ����մϴ�.
	-: ù ��° �ǿ����ڿ��� �� ���� �ǿ������� ���� ����մϴ�.
	*: �� ���� �ǿ������� ���� ����մϴ�.
	/: ù ��° �ǿ����ڿ��� �� ��° �ǿ����ڸ� �����ϴ�.
	>> �� ���� �ǿ����ڰ� ��� �����̸� ������� '��'�Դϴ�.
	%: ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� ������ �������� ���մϴ�.
	���� �� 19�� 6���� ������ �Ǹ� �� ���� 1�Դϴ�.
	�ε� �Ҽ���(�Ǽ�) ����� �� �����ϴ�.
	*/

	int a = 3;
	int b = 2;

	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;

	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	cout << "g: " << g << endl;

	int h = 5;

	// C++�� ������ ��� ������ ������ �� ������? > �ֽ��ϴ�.

	int multiple = a / b * h;

	cout << multiple;

	// auto: �ڵ����� ���� ����
	auto n = 100; // n�� int
	auto x = 1.5; // x�� float
	auto y = 1.3e12L; // y�� long long

	// 3���� float�� ����
	auto aa = 0.0;
	float bb = 0;
	auto cc = 0;
	
	return 0;
}