#include <iostream>

using namespace std;

int main() {
	//char: 작은 문자형
	//int a = 77;
	//char b = { 'a', 'b', 'c', '\0'};
	// null 문자 '\0': 를 넣어주지 않으면 null문자가 나올 때까지 이상한 값이 나온다.
	// "" >> 를 사용하면 명시적으로 null 문자가 포함된다.

	//bool: 0 혹은 1 | false or true, 0이외의 모든 값은 1로 저장
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << " " << b << " " << c << endl;
	return 0;
}