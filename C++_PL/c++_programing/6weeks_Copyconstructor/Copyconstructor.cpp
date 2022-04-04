//// Copyconstructor1.cpp
//#include <iostream>
//using namespace std;
//
//class myclass {
//	int a;
//public:
//	myclass() {
//		cout << "myclass() 생성자 호출" << endl;
//	}
//	myclass(int x) {
//		cout << "myclass(int x) 생성자 호출" << endl;
//		a = x;
//	}
//	myclass(const myclass& y) {
//		cout << "myclass(const myclass &y) 생성자 호출" << endl;
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
//	myclass ob1; // myclass() 생성자 호출
//
//	// myclass(int x) 생성자 호출, C스타일의 초기화
//	myclass ob2 = 20; // a를 20으로 초기화
//	myclass ob3(10); // myclass(int x) 생성자 호출, C++ 스타일
//	myclass ob4(ob3); // myclass(const myclass &y) 생성자 호출
//	myclass ob5 = ob4; // myclass(const myclass &y) 생성자 호출
//
//	cout << "ob1 객체 a = " << ob1.get() << endl;
//	cout << "ob2 객체 a = " << ob2.get() << endl;
//	cout << "ob3 객체 a = " << ob3.get() << endl;
//	cout << "ob4 객체 a = " << ob4.get() << endl;
//	cout << "ob5 객체 a = " << ob5.get() << endl;
//}
