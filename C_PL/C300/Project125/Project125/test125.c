// 구조체의 길이를 구하고 초기화하기

#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30]; // 이름
	char phone[20]; // 전화
	char address[100]; // 주소
};

typedef struct tagAddress addr;

void main(void)
{
	addr ad; // struct tagAddress ad;
	int len;

	len = sizeof(addr); // sizeof(struct tagAddress)

	printf("구조체 addr의 크기: %d \n", len);

	memset(&ad, 0, len); // memset(&ad, 0, sizeof(addr));
}