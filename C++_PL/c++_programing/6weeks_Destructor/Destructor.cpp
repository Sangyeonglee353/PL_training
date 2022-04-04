// Destructor.cpp
#include <iostream>
using namespace std;

class myclass {
	int a;
public:
	myclass(); // 생성자 함수
	~myclass(); // 소멸자 함수
	void show();
};

myclass::myclass()
{
	cout << "This is a constructor function. \n";
}

myclass::~myclass()
{
	cout << "This is a destructor function. \n";
}

void myclass::show()
{
	cout << "a: " << a;
}

int main()
{
	myclass a1; // a1 객체 생성 및 생성자 함수 호출
	myclass a2; // a2 객체 생성 및 생성자 함수 호출

	return 0; // 리턴과 동시에 객체 a1, a2 소멸 및 소멸자 함수 호출
}