#include <iostream>

using namespace std;

int main()
{
	// while문, do while문
	// while문   : 조건을 검사하고 실행한다.
	// do while문: 먼저 실행하고 조건을 검사한다.

	// while문 기본 구조

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

	// bool 조건을 통해 true / false 실행
	bool a = true;
	bool b = false;
	// 무한 반복문
	/*while (a) {
		cout << "hello\n";
	}*/

	/* 
	[for문과 while문의 차이점]
	1. while문은 조건을 관계 연산자없이 boolean으로 줄 수 있다.
	2. while문 내부에 카운터를 선언할 수 없다. | 따라서 미리 선언되어야 한다.
	3. while문의 카운터는 전역변수이므로 반복문이 끝나면 해당 값에 영향을 끼친다.
	*/

	for (int i = 0; i < 3; i++) {
		cout << "for문 입니다.\n";
	}

	int j = 0;
	while (j < 3) {
		cout << "while문 입니다.\n";
		j++;
	}

	// for문에서의 i는 지역변수 이므로 출력 불가
	// cout << i << endl;
	cout << j << endl;

	int k = 0;
	do {
		cout << "do while문 입니다.\n";
		k++;
	} while (k < 3);

	return 0;
}