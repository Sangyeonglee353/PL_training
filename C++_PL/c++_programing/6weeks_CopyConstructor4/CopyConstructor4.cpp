// CopyConstructor4.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
	int* p;
	int size;
public:
	Array(int sz) { // 생성자 함수
		p = new int[sz];
		if (!p) exit(1);
		size = sz;
		cout << "Using 'normal' construction\n";
	}
	~Array() { delete[] p; }

	// 복사 생성자
	Array(const Array& a);
	void put(int i, int j) {
		if (i >= 0 && i < size) p[i] = j;
	}
	int get(int i) {
		return p[i];
	}
};

Array::Array(const Array& a) // array는 키워드라서 에러가 발생했음 모호한 기호
{
	int i;
	size = a.size;
	p = new int[a.size]; // 복사본을 위해 메모리를 할당한다.
	if (!p) exit(1);
	for (i = 0; i < a.size; i++) p[i] = a.p[i]; // 내용을 복사한다.
	cout << "Using copy constructor\n";
}

/* 복사 생성자 함수 정의: 이 경우, 메모리는 복사본을 위해
할당되고, 이 메모리의 주소가 p에 저장된다. 이러한 방법으로,
p는 원본 객체와 같은 메모리를 가리키지 않게 된다.*/

int main()
{
	Array num(10); // 보통의 생성자를 호출한다.
	int i;

	// 값들을 배열에 저장한다.
	for (i = 0; i < 10; i++) num.put(i, i);

	// num을 출력한다.
	for (i = 9; i >= 0; i--) cout << num.get(i) << endl;

	// 또 다른 배열을 생성하고 num으로 초기화한다.
	Array x = num; // 이 문장은 복사 생성자 함수를 호출한다.

	// x를 출력한다.
	for (i = 0; i < 10; i++) cout << x.get(i) << endl;

	return 0;
}