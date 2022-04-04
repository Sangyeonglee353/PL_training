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
//	~Person(); // 소멸자(destructor) 함수
//};
//
//Person::Person(const char* _name, const char* _phone, int _age)
//{
//	// 방법 1
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
//	// 방법 2
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
//	Person p2 = p1; // Person p2(p1); 여기까지는 문제 없음
//
//	p1.ShowData();
//	p2.ShowData();
//
//	return 0; // r리턴과 동시에 p 객체 소멸 -> 소멸하는 과정에서 에러 발생
//}