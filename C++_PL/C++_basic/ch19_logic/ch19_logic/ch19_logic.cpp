#include <iostream>

using namespace std;

int main() {

	// �� ǥ����
	// ����, ����, ������ ������

	// true : 0, false : 1
	// ���� || -> OR ������
	/*
	5 < 10 || 5 > 3 -> ture  || true  -> true
	5 < 10 || 5 < 3 -> true  || false -> true
	5 > 10 || 5 > 3 -> false || true  -> true
	5 > 10 || 5 < 3 -> false || false -> false
	*/

	// ���� && -> AND ������
	/*
	5 < 10 && 5 > 3 -> ture  && true  -> true
	5 < 10 && 5 < 3 -> true  && false -> false
	5 > 10 && 5 > 3 -> false && true  -> false
	5 > 10 && 5 < 3 -> false && false -> false
	*/

	// ������ ������ ! 
	/*
	!(ture)  -> false
	!(false) -> true
	*/

	cout << "����� ���̸� �Է��Ͻʽÿ�. ";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "������ �Ͻø� �ȵ˴ϴ�!\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "����� 20�� �̱���?\n";
	}
	else {
		cout << "����� ���̸� �� �𸣰ڽ��ϴ�.\n";
	}

	return 0;
}