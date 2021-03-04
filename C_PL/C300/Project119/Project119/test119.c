// 구조체 사용하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
}; //중괄호{}뒤의 세미콜론을 절대 빠뜨리지 마세요.

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "서울시 양천구 목동아파트 13단지");

	printf("이름: %s \n", ad.name);
	printf("전화: %s \n", ad.phone);
	printf("주소: %s \n", ad.address);
}