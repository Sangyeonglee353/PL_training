#include <iostream>

using namespace std;

int main() {

	// 논리 표현식
	// 논리합, 논리곱, 논리부정 연산자

	// true : 0, false : 1
	// 논리합 || -> OR 연산자
	/*
	5 < 10 || 5 > 3 -> ture  || true  -> true
	5 < 10 || 5 < 3 -> true  || false -> true
	5 > 10 || 5 > 3 -> false || true  -> true
	5 > 10 || 5 < 3 -> false || false -> false
	*/

	// 논리곱 && -> AND 연산자
	/*
	5 < 10 && 5 > 3 -> ture  && true  -> true
	5 < 10 && 5 < 3 -> true  && false -> false
	5 > 10 && 5 > 3 -> false && true  -> false
	5 > 10 && 5 < 3 -> false && false -> false
	*/

	// 논리부정 연산자 ! 
	/*
	!(ture)  -> false
	!(false) -> true
	*/

	cout << "당신의 나이를 입력하십시오. ";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "거짓말 하시면 안됩니다!\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "당신은 20대 이군요?\n";
	}
	else {
		cout << "당신의 나이를 잘 모르겠습니다.\n";
	}

	return 0;
}