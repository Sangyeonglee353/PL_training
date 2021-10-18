// [실습문제 7-1] CityInfo, 구조체를 이용하여 각 도시의 정보를 출력하는 프로그램 작성하기
#include<stdio.h>
#define NUMBER 3 // 배열의 크기 정의

// 위도와 경도 변수로 사용할 position 구조체 선언
struct position {
	float latitude;  // 위도
	float longitude; // 경도
};

// 도시 정보 변수로 사용할 city 구조체 선언
struct city {
	char* cityName;
	struct position p;
};

int main(void) {
	// 구조체 city의 배열 변수 선언 및 초기화
	struct city cityinfo[NUMBER] = { {"서울", {37.3, 126.6}},
									 {"뉴욕", {40.8, 73.9}},
									 {"동경", {50.5, 135.2}} };

	// 저장된 도시 정보 출력
	printf("등록된 도시에 대한 위치정보는 다음과 같다.\n");
	for (int i = 0; i < NUMBER; i++) {
		printf("%d. 도시%d: %s, 위도: %.1f, 경도: %.1f\n", i + 1, i + 1, \
			cityinfo[i].cityName, cityinfo[i].p.latitude, cityinfo[i].p.longitude);
	}

	return 0;
}