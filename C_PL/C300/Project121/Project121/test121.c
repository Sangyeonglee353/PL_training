// 구조체를 함수에서 사용하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print(struct tagAddress *pad);

struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "서울시 양천구 목동아파트 13단지");

	print(&ad);
}

void print(struct tagAddress *pad)
{
	printf("이름: %s \n", pad->name);
	printf("전화: %s \n", pad->phone);
	printf("주소: %s \n", pad->address);
}