// Person2.cpp
#include <iostream>
using namespace std;

class Person
{
	char name[10];
	char phone[20];
	int age;
public:
	void ShowData();
	void SetData(const char* _name, const char* _phone, int _age);
};

void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

void Person::SetData(const char* _name, const char* _phone, int _age)
{
	int len;
	len = strlen(_name) + 1;
	strcpy_s(name, len, _name);
	len = strlen(_phone) + 1;
	strcpy_s(phone, len, _phone);
	
	age = _age;
}


int main()
{
	Person p;
	p.SetData("Cho", "041-560-1491", 36);
	p.ShowData();

	return 0;
}