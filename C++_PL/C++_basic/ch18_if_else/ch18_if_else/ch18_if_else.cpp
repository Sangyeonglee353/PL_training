#include <iostream>

using namespace std;

int main() {

	// �б� ����: if����
	/*if (false) {
		cout << "������ ���Դϴ�." << endl;
	}
	else {
		cout << "������ �����Դϴ�." << endl;
		if (true) {
			cout << "����2�� ���Դϴ�." << endl;
		}
		else {
			cout << "����2�� �����Դϴ�." << endl;
		}
	}*/

	if (false) {
		cout << "������ ���Դϴ�." << endl;
	}
	else if (true) {
		cout << "����2�� ���Դϴ�." << endl;
	}
	else {
		cout << "������ �����Դϴ�." << endl;
	}

	/*if (false) {
		cout << "������ �����Դϴ�.";
	}*/

	cout << "���α׷��� ����Ǿ����ϴ�.";

	return 0;
}