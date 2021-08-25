#include <iostream>

using namespace std;

int main() {
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열 : 같은 데이터형의 집합

	// 축구선수
	struct Mystruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;

	/*Mystruct A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;*/

	Mystruct A = {
		"Son",
		"Striker",
		183,
		77
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	B = {

	};

	cout << B.height << endl;


	// 구조체도 배열형태로 초기화 가능하다.
	Mystruct C[2] = {
		{"A", "A", 1,1},
		{"B","B", 2,2}
	};

	cout << C[0].height << endl;

}