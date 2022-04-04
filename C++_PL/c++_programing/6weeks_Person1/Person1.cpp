// Person1.cpp
#include <iostream>
using namespace std;

class Person
{
	char name[10];
	char phone[10];
	int age;
public:
	void ShowData();

};

void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

int main()
{
	Person p = { "KIM", "013-113-1113", 22 }; // 초기화 에러 발생
	p.ShowData();

	return 0;
}
