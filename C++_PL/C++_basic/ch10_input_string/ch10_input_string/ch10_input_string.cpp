#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//����� �Է�
	const int size = 15;
	char name1[size]; // ����ִ� �迭
	char name2[size] = "C++programing"; // ���ڿ� ����� �ʱ�ȭ�� �迭

	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���?\n";
	//cin >> name1;
	cin.get(name1, size); // ������ �����Ͽ� �Է¹ޱ�

	cout << "��, " << name1 << "��, ����� �̸��� ";
	cout << strlen(name1) << "���Դϴٸ�\n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���.\n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;

	//C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	/*
	C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� ���ִ�.
	cin�� ����Ͽ�  string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷����� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.

	�迭�� �ٸ� �迭�� ��°�� ������ �� ����
	>> string������ �����ϴ�.
	*/

	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; // Ʋ����
	str1 = str2; // �´�

	//cout << char1[20] << endl;
	cout << str1 << endl;

	return 0;
}