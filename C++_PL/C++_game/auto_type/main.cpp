#include <iostream>
#include <typeinfo>

using namespace std;

int main(void) {
	auto price = 200; // price는 int 타입으로 결정
	auto pi = 3.14; // pi는 double 타입으로 결정
	auto ch = 'K'; // ch는 char 타입으로 결정
	
	cout << typeid(price).name() << endl;
	cout << typeid(pi).name() << endl;
	cout << typeid(ch).name() << endl;

	return 0;
}