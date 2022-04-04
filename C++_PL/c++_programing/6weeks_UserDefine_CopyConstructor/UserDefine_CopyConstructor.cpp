// UserDefine_CopyConstructor
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name,const char* _phone, int _age);
	Person(const Person& p);
	~Person();
	void ShowData();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);

	age = _age;
}

Person::Person(const Person& p)
{
	name = new char[strlen(p.name) + 1];
	strcpy(name, p.name);

	phone = new char[strlen(p.phone) + 1];
	strcpy(phone, p.phone);

	age = p.age;
}

Person::~Person()
{
	delete[] name;
	delete[] phone;
}

void Person::ShowData()
{
	// name 포인터가 가리키는 주소값 출력
	printf("name=%d \n", name);

	// phone 포인터가 가리키는 주소값 출력
	printf("phone=%d \n", phone);

	cout << "age: " << age << endl;
}

int main()
{
	Person p1("Cho", "041-560-1491", 36);
	Person p2 = p1; // Person p2(p1);

	p1.ShowData();
	p2.ShowData();

	return 0;
}