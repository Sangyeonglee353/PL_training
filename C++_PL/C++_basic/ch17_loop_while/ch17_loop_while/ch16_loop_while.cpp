#include <iostream>

using namespace std;

int main()
{
	// while��, do while��
	// while��   : ������ �˻��ϰ� �����Ѵ�.
	// do while��: ���� �����ϰ� ������ �˻��Ѵ�.

	// while�� �⺻ ����

	//int i = 0;
	//while (i < 3) {
	//	// code
	//	i++;
	//}
	
	string str = "Panda";
	/*int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}*/

	// bool ������ ���� true / false ����
	bool a = true;
	bool b = false;
	// ���� �ݺ���
	/*while (a) {
		cout << "hello\n";
	}*/

	/* 
	[for���� while���� ������]
	1. while���� ������ ���� �����ھ��� boolean���� �� �� �ִ�.
	2. while�� ���ο� ī���͸� ������ �� ����. | ���� �̸� ����Ǿ�� �Ѵ�.
	3. while���� ī���ʹ� ���������̹Ƿ� �ݺ����� ������ �ش� ���� ������ ��ģ��.
	*/

	for (int i = 0; i < 3; i++) {
		cout << "for�� �Դϴ�.\n";
	}

	int j = 0;
	while (j < 3) {
		cout << "while�� �Դϴ�.\n";
		j++;
	}

	// for�������� i�� �������� �̹Ƿ� ��� �Ұ�
	// cout << i << endl;
	cout << j << endl;

	int k = 0;
	do {
		cout << "do while�� �Դϴ�.\n";
		k++;
	} while (k < 3);

	return 0;
}