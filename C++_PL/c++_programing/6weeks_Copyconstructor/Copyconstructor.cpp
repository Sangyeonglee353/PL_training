//// Copyconstructor1.cpp
//#include <iostream>
//using namespace std;
//
//class myclass {
//	int a;
//public:
//	myclass() {
//		cout << "myclass() ������ ȣ��" << endl;
//	}
//	myclass(int x) {
//		cout << "myclass(int x) ������ ȣ��" << endl;
//		a = x;
//	}
//	myclass(const myclass& y) {
//		cout << "myclass(const myclass &y) ������ ȣ��" << endl;
//		a = y.a;
//	}
//	int get();
//};
//
//int myclass::get()
//{
//	return a;
//}
//
//int main()
//{
//	myclass ob1; // myclass() ������ ȣ��
//
//	// myclass(int x) ������ ȣ��, C��Ÿ���� �ʱ�ȭ
//	myclass ob2 = 20; // a�� 20���� �ʱ�ȭ
//	myclass ob3(10); // myclass(int x) ������ ȣ��, C++ ��Ÿ��
//	myclass ob4(ob3); // myclass(const myclass &y) ������ ȣ��
//	myclass ob5 = ob4; // myclass(const myclass &y) ������ ȣ��
//
//	cout << "ob1 ��ü a = " << ob1.get() << endl;
//	cout << "ob2 ��ü a = " << ob2.get() << endl;
//	cout << "ob3 ��ü a = " << ob3.get() << endl;
//	cout << "ob4 ��ü a = " << ob4.get() << endl;
//	cout << "ob5 ��ü a = " << ob5.get() << endl;
//}
