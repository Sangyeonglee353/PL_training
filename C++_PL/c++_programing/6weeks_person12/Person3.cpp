///* Person3.cpp */
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Person
//{
//	char name[20];
//	char phone[20];
//	int age;
//
//public:
//	Person(const char* _name, const char* _phone, int _age); // 생성자함수
//	void ShowData();
//};
//
//Person::Person(const char* _name, const char* _phone, int _age)
//{
//	int len;
//	len = strlen(_name) + 1;
//	strcpy_s(name, len, _name);
//	len = strlen(_phone) + 1;
//	strcpy_s(phone, len, _phone);
//	age = _age;
//}
//
//void Person::ShowData()
//{
//	cout << "name: " << name << endl;
//	cout << "phone: " << phone << endl;
//	cout << "age: " << age << endl;
//}
//
//int main()
//{
//	Person p = {"LEE", "010-111-1234", 22 }; // 초기화
//	p.ShowData();
//
//	return 0;
//}
//
//
