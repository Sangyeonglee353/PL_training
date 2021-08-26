#include <iostream>

using namespace std;

int main() {

	// 분기 구문: if구문
	/*if (false) {
		cout << "조건이 참입니다." << endl;
	}
	else {
		cout << "조건이 거짓입니다." << endl;
		if (true) {
			cout << "조건2가 참입니다." << endl;
		}
		else {
			cout << "조건2가 거짓입니다." << endl;
		}
	}*/

	if (false) {
		cout << "조건이 참입니다." << endl;
	}
	else if (true) {
		cout << "조건2가 참입니다." << endl;
	}
	else {
		cout << "조건이 거짓입니다." << endl;
	}

	/*if (false) {
		cout << "조건이 거짓입니다.";
	}*/

	cout << "프로그램이 종료되었습니다.";

	return 0;
}