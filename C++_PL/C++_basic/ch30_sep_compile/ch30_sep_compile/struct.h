#ifndef STRUCT
#define STRUCT

#include <iostream>

using namespace std;

struct MyStruct {
	string name;
	int age;
};

void display(MyStruct&);

#endif // !STRUCT

/*
[header 파일에 포함되는 부분]
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 클래스 선언
5. 템플릿 선언
6. 인라인 함수
*/
