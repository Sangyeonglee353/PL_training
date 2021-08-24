#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//사용자 입력
	const int size = 15;
	char name1[size]; // 비어있는 배열
	char name2[size] = "C++programing"; // 문자열 상수로 초기화된 배열

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요?\n";
	//cin >> name1;
	cin.get(name1, size); // 공백을 포함하여 입력받기

	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << "자입니다만\n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";
	cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl;

	//C++에서 문자열을 다루는 방법 중 하나인 string
	/*
	C스타일로 string 객체를 초기화할 수있다.
	cin을 사용하여  string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체를 디스플레이할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

	배열을 다른 배열에 통째로 대입할 수 없다
	>> string에서는 가능하다.
	*/

	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; // 틀리다
	str1 = str2; // 맞다

	//cout << char1[20] << endl;
	cout << str1 << endl;

	return 0;
}