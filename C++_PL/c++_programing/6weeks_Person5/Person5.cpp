// Person5.cpp
#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Person
{
	char* name;
	char* phone;
	int age;

public:
	Person(const char* _name, const char* _phone, int _age);
	void ShowData();
	~Person(); // �Ҹ���(destructor) �Լ�
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);

	age = _age;
}

void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

Person::~Person()
{
	delete[] name;
	delete[] phone;
	cout << "This is a destructor function" << endl;
}

int main()
{
	Person p("Cho", "041-560-1491", 36);
	p.ShowData();

	return 0;
}