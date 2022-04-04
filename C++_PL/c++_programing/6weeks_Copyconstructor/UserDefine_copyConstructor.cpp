//// Person4.cpp
//#include <iostream>
//using namespace std;
//#pragma warning(disable:4996)
//
//class Person
//{
//	char* name;
//	char* phone;
//	int age;
//public:
//	Person(const char* _name, const char* _phone, int _age);
//	Person(const Person& p);
//	void ShowData();
//	~Person(); // �Ҹ���(destructor) �Լ�
//};
//
//Person::Person(const char* _name, const char* _phone, int _age)
//{
//	// ��� 1
//	int len;
//	len = strlen(_name) + 1;
//	name = new char[len];
//	strcpy_s(name, len, _name);
//
//	len = strlen(_phone) + 1;
//	phone = new char[len];
//	strcpy_s(phone, len, _phone);
//
//	age = _age;
//}
//
//Person::Person(const Person& p)
//{
//	// ��� 2
//	name = new char[strlen(p.name) + 1];
//	strcpy(name, p.name);
//
//	phone = new char[strlen(p.phone) + 1];
//	strcpy(phone, p.phone);
//	
//	age = p.age;
//}
//
//void Person::ShowData()
//{
//	cout << "name: " << name << endl;
//	cout << "phone: " << phone << endl;
//	cout << "age : " << age << endl;
//}
//
//Person::~Person()
//{
//	delete[] name;
//	delete[] phone;
//	cout << "This is a destructor function" << endl;
//}
//
//int main()
//{
//	Person p1("Cho", "041-560-1491", 36);
//	Person p2 = p1; // Person p2(p1); ��������� ���� ����
//
//	p1.ShowData();
//	p2.ShowData();
//
//	return 0; // r���ϰ� ���ÿ� p ��ü �Ҹ� -> �Ҹ��ϴ� �������� ���� �߻�
//}