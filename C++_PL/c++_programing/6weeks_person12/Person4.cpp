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
//	void ShowData();
//	~Person(); // ¼Ò¸êÀÚ(destructor) ÇÔ¼ö
//};
//
//Person::Person(const char* _name, const char* _phone, int _age)
//{
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
//	Person p("Cho", "041-560-1491", 36);
//	p.ShowData();
//
//	return 0; // r¸®ÅÏ°ú µ¿½Ã¿¡ p °´Ã¼ ¼Ò¸ê
//}