#include <iostream>

using namespace std;

const int SIZE = 30;

int main() {

	// switch문
	/*
	1. switch문은 boolean 뿐만 아니라 다른 값을 검사할 수 있다.
	2. case를 통해 해당하는 조건을 검사할 수 있다.
	3. break 로 중단을 할 수 있다. (if문에서도 사용가능)
	4. continue 로 계속 진행(다음 실행문 생략)을 할 수 있다.
	5. default 로 모든 case에 해당하지 않는 경우 값을 출력할 수 있다.
	*/

	int a;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "입력하신 값은 1 입니다.\n";
		break;

	case 2:
		cout << "입력하신 값은 2 입니다.\n";
		break;

	case 3:
		cout << "입력하신 값은 3 입니다.\n";
		break;

	default:
		cout << "입력하신 값은 1, 2, 3 이외의 다른 값입니다.\n";
		break;
	}

	cout << "switch문이 끝났습니다.\n";

	// break 활용 예시
	int i = 0;
	while (true)
	{
		cout << "i의 값은 " << i << " 입니다." << endl;
		if (i > 10) {
			break;
		}
		i++;
	}

	cout << "while문이 끝났습니다.\n";

	// continue 활용 예시
	cout << "문장을 입력하십시오.\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "입력하신 문장은\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ') // 공백인 경우 spaces++을 실행하지 않음
		{
			continue;
		}
		spaces++;
	}
	cout << "입니다.\n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다.\n";
	cout << "for문이 끝났습니다.\n";

	return 0;
}