// [실습문제 7-2] CarInfo, 차량 소유 정보를 저장하는 프로그램 작성하기
#include <stdio.h>
#define NUMBER 3 // 구조체 배열 변수 크기 정의

struct person { // 개인 정보 구조체 선언
	char* name;       // 이름
	char* tel;        // 전화번호
	char* address;    // 주소
};

union ownership { // 개인과 회사에 따른 소유주 공용체 선언
	struct person p;
	char* company;    // 회사명
};

struct car { // 자동차 정보 구조체 선언
	int year; // 연식
	char* carname; // 차량 종류
	int type; // 개인이면 0, 회사이면 1
	union ownership owner; // 소유주
};

// 구조체 car를 struct없이 사용할 수 있도록 car로 타입 정의
typedef struct car car; 

int main(void) {
	// 구조체 배열 선언 및 초기화
	car list[NUMBER]= { { 201209, "그랜저 GT", 0, {"홍길동", "011-1111-1111", "서울시 구로구 고척동"}},
	                    { 201304, "인피니티", 1, "인피니티북스" },
	                    { 202010, "르노삼성", 0, {"조재수", "010-2606-8038", "충남 천안시"} } };

	// 등록된 차량 정보 출력
	printf("년식\t\t종류\t\t주인\n");
	for (int i = 0; i < NUMBER; i++) {
		if (list[i].type == 0) {
			printf("%d\t\t%s\t%s %s %s\n", list[i].year, list[i].carname, list[i].owner.p.name, \
				list[i].owner.p.tel, list[i].owner.p.address);
		}
		else if (list[i].type == 1) {
			printf("%d\t\t%s\t%s\n", list[i].year, list[i].carname, list[i].owner.company);
		}
		else {
			printf("등록 타입이 잘못되었습니다.\n");
		}
	}
	return 0;
}

