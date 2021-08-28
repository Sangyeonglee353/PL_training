#include <iostream>

using namespace std;

void swapA(int& a, int& b);
void swapB(int* a, int* b);
void swapC(int a, int b);

int main()
{
	// ����(reference)��? C++���� ���� ������ ����
	// �̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	// [����] �Լ��� �Ű������� ���
	/*
	[Ư¡]
	1. ���纻�� �ƴ� ���� �����͸� ������ �����Ѵ�.
	>> ����ü �Լ��� ��� ���纻�� ���
	>> ���� �̿��� �Լ��� ��� ���纻�� ���
	[��� �ñ�]
	1. ������ �����Ͱ� �ʹ� ū ��� ���� �ӵ��� ������ ���ؼ�
	[����]
	��������: 
	int a;
	int& b = a;
	*/

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << endl << "[������ �̿��� ���� ��ȯ]" << endl;
	swapA(wallet1, wallet2);
	cout << "���� ��ȯ ���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << endl << "[�����͸� �̿��� ���� ��ȯ]" << endl;
	swapB(&wallet1, &wallet2);
	cout << "�����͸� �̿��� ��ȯ ���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
	
	cout << endl << "[���� �̿��� ���� ��ȯ]" << endl;
	swapC(wallet1, wallet2);
	cout << "���� �̿��� ��ȯ ���� ����" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	/*
	[���]
	1. ������ ������ �Ű������� ��� ������ �̿��ϹǷ�
	���� �������� ������ ��ȭ�� �����.
	2. �� �Ű������� ��� ���纻�� �̿��ϹǷ�
	���� �����Ϳ��� ������ ���� �ʴ´�.
	>> �̴� ����ü �Ű������� �����ϴ�.

	[�ָ��� ��]
	1. �Լ��� �Ű�����(argument)�� �Է����°� �ٸ���.
	���� �Ű�����   : �Ϲݰ�
	������ �Ű����� : �ּҰ�(&)
	�� �Ű�����     : �Ϲݰ�
	2. �Լ��� �Ķ����(parameter)�� ���°� �ٸ���.
	���� �Ķ����   : ��������(&)
	������ �Ķ���� : �����ͺ���(*)
	�� �Ķ����     : �Ϲݰ�
	*/

	return 0;
}

void swapA(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swapB(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void swapC(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}