#include <iostream>
#include <typeinfo>

using namespace std;

int main(void) {
	auto price = 200; // price�� int Ÿ������ ����
	auto pi = 3.14; // pi�� double Ÿ������ ����
	auto ch = 'K'; // ch�� char Ÿ������ ����
	
	cout << typeid(price).name() << endl;
	cout << typeid(pi).name() << endl;
	cout << typeid(ch).name() << endl;

	return 0;
}