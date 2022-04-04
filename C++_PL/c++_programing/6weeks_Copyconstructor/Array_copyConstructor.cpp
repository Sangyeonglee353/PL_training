// Copycostructor4.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

class array {
	int* p;
	int size;
public:
	array(int sz) // 보통의 생성자 함수
	{
		p = new int[sz];
		if (!p) exit(1);
		size = sz;
		cout << "Using 'normal' constructor\n";
	}
	~array() { delete[] p; }

	// 복사 생성자
	array(const array &a);
	void put(int i, int j) {
		if (i >= 0 && i < size) p[i] = j;
	}
	int get(int i) {
		return p[i];
	}
};

array::array(const array& a)
{
	int i;
	size = a.size;
	p = new int[a.size];// 복사본을 위해 메모리를 할당한다.
	if (!p) exit(1);
	for (i = 0; i < a.size; i++) p[i] = a.p[i]; // 내용을 복사한다.
	cout << "Using copy constrcutor\n";
}

int main()
{
	array num(10); // 보통의 생성자를 호출한다.
	int i;

	// 값들을 배열에 저장한다.
	for (i = 0; i < 10; i++) num.put(i, i);

	// num을 출력한다.
	for (i = 9; i >= 0; i--) cout << num.get(i) << endl;

	// 또 다른 배열을 생성하고 num으로 초기화한다.
	array x = num; // 이 문장은 복사 생성자 함수르 ㄹ호출한다.
	
	// x를 출력한다.
	for (i = 0; i < 10; i++) cout << x.get(i) << endl;

	return 0;
}