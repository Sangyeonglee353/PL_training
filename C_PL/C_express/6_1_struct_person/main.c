// [실습문제 1] Struct_Person, 인적 정보 저장하기
#include <stdio.h>

void Display(struct Person info[]); // 구조체 출력 함수 선언

struct Person { // 구조체 선언
	char name[20];
	char tel[20];
	int office;
};

int main(void) {
	// 구조체 배열 선언 및 초기화
	struct Person info[] = { { "Jae-Soo Cho", "041-560-1491", 425},
							 { "Sang-Jin Kim", "041-560-1490", 325},
							 { "Sung-Chul Park", "041-560-1492", 225}
	};

	// 함수로 구조체 값 출력
	Display(info);

	return 0;
}

// 구조체 출력 함수 정의
void Display(struct Person info[])
{
	// 반복문으로 구조체 배열의 값 출력
	for (int i = 0; i < 3; i++)
	{
		printf("사람%d: 이름: %s, 전화번호: %s, 호실: %d\n", i + 1, \
			info[i].name, info[i].tel, info[i].office);
	}
}