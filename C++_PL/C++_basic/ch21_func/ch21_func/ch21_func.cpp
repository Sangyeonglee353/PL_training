#include <iostream>

using namespace std;

const float PI = 3.14; // ��� ����
void cheers(int n);
float circle(int x);

int main()
{
	/*
	[�Լ���?]
	�ϳ��� Ư���� ������ �۾���
	�����ϱ� ���� ����������
	����� �ڵ��� ����
	ȣ���� �Լ����� ����
	�ǵ����ִ�,
	return value�� �ִ� �Լ���
	���� �Լ��� �з�
	> �迭�� ������ �� �� ����.
	> ��, �迭�� ����ü�� ����ü�� �����Ѵٸ� ����
	*/

	/*
	1. �Լ� ���� ����
	2. �Լ� ���� ����
	3. �Լ� ȣ��
	*/

	/*
	[�Լ��� ����]
	1. ���ϰ��� �ִ� Ÿ��

	typename functionName(parameterList)
	{
		statement(s);
		return value;
	}
	2. ���ϰ��� ���� Ÿ��

	void functionName(parameterList)
	{
		statement(s);
		return; // ������ �� ����
	}
	*/
	
	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." << endl;

	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x)
{
	return x * x * PI;
}
